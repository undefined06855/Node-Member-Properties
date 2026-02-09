import json
import os
import re
import textwrap
from typing import Any, Generator

import requests
from clang.cindex import *  # pyright: ignore[reportWildcardImportFromLibrary]
from clang.cindex import CompilationDatabaseError
from dotenv import load_dotenv

# This script does 2 things
# 1. generate an src/headers.cpp (with all headers)
# 2. generate an src/generated.cpp from headers.cpp and template.cpp (which will be compiled)
#    (easier said than done)

# let use use env vars in globals (goes against my python guidelines but whatever)
# this is kind of sad because it means importing has side effects but whatever
load_dotenv()


class GenerationException(Exception):
    pass


namespace_blacklist = ["std::", "std23::", "gd::", "fmt::", "matjson::", "pugi::", "tinyxml2::", "asp::", "arc::"]

devtools_builtin_types = [
    # std::is_arithmetic types
    "bool",
    "char",
    "signed char",
    "unsigned char",
    "wchar_t",
    "char16_t",
    "char32_t",
    "short",
    "unsigned short",
    "int",
    "unsigned int",
    "long",
    "unsigned long",
    "long long",
    "unsigned long long",
    "float",
    "double",
    "long double",
    "void",  # for void* specifically
    # devtools specific
    "std::string",
    "cocos2d::ccColor3B",
    "cocos2d::ccColor4B",
    "cocos2d::ccColor4F",
    "cocos2d::CCPoint",
    "cocos2d::CCSize",
    "cocos2d::CCRect",
]

# ...also goes against my python guidelines but id rather not copy the whole thing manually
devtools_builtin_types.extend([f"const {type}" for type in devtools_builtin_types])

my_builtin_types = [
    "gd::string",
    "geode::SeedValueRS",
    "geode::SeedValueRSV",
    "geode::SeedValueRVS",
    "geode::SeedValueSR",
    "geode::SeedValueSRV",
    "geode::SeedValueSVR",
    "geode::SeedValueVRS",
    "geode::SeedValueVSR",
]

do_not_generate_definitions_for = [*namespace_blacklist, *devtools_builtin_types, *my_builtin_types]

# templates something?
evil_blacklist = ["type-parameter-", "value-parameter-"]

file_location_blacklist = [
    location
    for location in [
        *os.environ["OS_HEADER_LOCATIONS"].split(","),
        *os.environ["STL_HEADER_LOCATIONS"].split(","),
    ]
    if location != ""
]


def generate_headers_cpp():
    # fetch codegen from prevter bindings
    codegen: Any
    if bool(os.environ["USE_LOCAL_CODEGEN"]):
        try:
            with open(f"{os.environ["BUILD_DIR"]}/bindings/bindings/Geode/CodegenData.json", "r") as file:
                codegen = json.loads(file.read())
        except FileNotFoundError as error:
            error.add_note("Have you configured CMake?")
            raise error
    else:
        codegen = requests.get(
            f"https://prevter.github.io/bindings-meta/CodegenData-{os.environ["GD_VERSION"]}.json"
        ).json()

    output = ""

    if os.environ["GD_PLATFORM"] == "win":
        output += '#include "WinBase.h" // for IsBadReadPtr on windows only\n\n'

    output += "#include <Geode/cocos/include/cocos2d.h>\n"
    output += "#include <Geode/Geode.hpp>\n"
    output += "\n"

    # these get included by the above headers
    prefix_blacklist = [
        "cocos2d",
        "pugi",
        "FMOD",
        "CCContentManager",
        "DS_Dictionary",
        "ObjectDecoder",
    ]

    for class_data in codegen["classes"]:
        name: str = class_data["name"]

        if any(name.startswith(prefix) for prefix in prefix_blacklist):
            continue

        output += f"#include <Geode/binding/{name}.hpp>\n"

    output += "\n"

    with open("src/headers.cpp", "w") as file:
        file.write(output)


def get_qualified_name(cursor: Cursor | None) -> str:
    if not cursor:
        return ""

    parts = []
    while cursor and cursor.kind != CursorKind.TRANSLATION_UNIT:
        spelling = cursor.spelling

        if is_anonymous_type(cursor.type):
            return ""

        if spelling == "":
            cursor = cursor.semantic_parent
            continue

        parts.append(spelling)
        cursor = cursor.semantic_parent

    return "::".join(parts[::-1])


def get_symbol_location_name(cursor: Cursor) -> str:
    location = cursor.location.file
    return location.name if location else "???"


def unpointer_type(type: Type) -> Type:
    type = type.get_canonical()

    while True:
        if type.kind == TypeKind.TYPEDEF:
            canonical = type.get_canonical()
            if canonical.kind in [TypeKind.RECORD, TypeKind.ENUM] and canonical.get_declaration().spelling:
                break

            type = type.get_canonical()

        elif type.kind in [TypeKind.ELABORATED, TypeKind.ATTRIBUTED]:
            type = type.get_named_type()

        elif type.kind == TypeKind.POINTER:
            type = type.get_pointee()

        elif type.kind in [TypeKind.CONSTANTARRAY, TypeKind.INCOMPLETEARRAY, TypeKind.VARIABLEARRAY]:
            type = type.get_array_element_type()

        else:
            break

    return type


def get_qualified_type_name(type: Type) -> str:
    if not type:
        return ""

    cursor = type.get_declaration()
    names = []

    # built in type.... probably
    if cursor.kind == CursorKind.NO_DECL_FOUND:
        return type.spelling

    while cursor and cursor.kind != CursorKind.TRANSLATION_UNIT:
        if cursor.spelling == "":
            cursor = cursor.semantic_parent
            continue

        names.append(cursor.spelling)
        cursor = cursor.semantic_parent

    return "::".join(names[::-1])


# this has the side effect of causing other parts of the program to use pointer arithmetic on templated classes
# which i think is really pretty bad actually but i think it works fine?
# i dont know there were some errors about templated classes before this and none after doing this so who knows
def is_effectively_public(cursor: Cursor | None):
    if not cursor:
        return False

    # class A { public: bool m_test }
    # if this is ran on A::m_test.get_declaration() it should be public
    # though the access specifier will be unknown
    # ...probably
    if cursor.kind == CursorKind.NO_DECL_FOUND:
        return True

    while cursor and cursor.kind != CursorKind.TRANSLATION_UNIT:
        if cursor.access_specifier in [AccessSpecifier.PRIVATE, AccessSpecifier.PROTECTED]:
            # if any are not public, return false
            return False

        cursor = cursor.semantic_parent

    # if all layers are public, return true!
    return True


def is_function(type: Type):
    type = unpointer_type(type)

    if type.kind in [TypeKind.FUNCTIONPROTO, TypeKind.FUNCTIONNOPROTO]:
        return True

    if type.kind == TypeKind.MEMBERPOINTER:
        pt = type.get_pointee()
        return pt.kind in [TypeKind.FUNCTIONPROTO, TypeKind.FUNCTIONNOPROTO]

    return False


def is_anonymous_type(type: Type) -> bool:
    # yeahhh
    return "(unnamed " in get_qualified_type_name(unpointer_type(type))


def should_skip_for_any_reason(thing: Cursor, for_member_listing: bool = False) -> bool:
    if is_function(thing.type):
        return True

    # the rest of the checks should NOT be done if this is for the member listing
    # i.e. we still want to show members in blacklisted namespaces and in stl libraries
    if for_member_listing:
        return False

    if is_anonymous_type(unpointer_type(thing.type)):
        # this will be (unnamed struct at .... which we can't use here
        return True

    file_location = get_symbol_location_name(thing)
    if any(file_location.startswith(location) for location in file_location_blacklist):
        return True  # skip blacklisted file locations

    type_name = get_qualified_type_name(thing.type)

    if any(type_name.startswith(namespace) for namespace in namespace_blacklist):
        return True  # skip blacklisted namespaces

    if any(thing in type_name for thing in evil_blacklist):
        return True  # skip evil things

    return False


def get_inherited_classes_recursive(type: Type) -> Generator[Type]:
    for child in type.get_declaration().get_children():
        if child.kind != CursorKind.CXX_BASE_SPECIFIER or should_skip_for_any_reason(child):
            continue

        yield child.type
        yield from get_inherited_classes_recursive(child.type)


def get_types_required_recursive(cursor: Cursor) -> Generator[Type]:
    if not cursor:
        return

    for child in cursor.get_children():
        # fields in classes
        if child.kind == CursorKind.FIELD_DECL:
            if should_skip_for_any_reason(child):
                continue

            yield child.type

            declaration = child.type.get_declaration()
            if declaration:
                yield from get_types_required_recursive(declaration)

        # classes
        elif child.kind in [CursorKind.CLASS_DECL, CursorKind.STRUCT_DECL]:
            if not child.is_definition() or should_skip_for_any_reason(child):
                continue

            yield child.type
            yield from get_inherited_classes_recursive(child.type)

        yield from get_types_required_recursive(child)


def filter_for_ccnode_classes(generator: Generator[Type]) -> Generator[Type]:
    for type in generator:
        if get_qualified_type_name(type) == "cocos2d::CCNode":
            yield type
            continue

        for inherited in get_inherited_classes_recursive(type):
            if get_qualified_type_name(inherited) == "cocos2d::CCNode":
                yield type


def function_name_for_class(type: Type) -> str:
    base_type = unpointer_type(type)
    return f"devtools_{
        re.sub(
            r"[^a-zA-Z0-9]", "_",
            get_qualified_type_name(base_type)
                .replace("::", "__")
        )
    }"


def generate_cpp_for_devtools_builtin_member(type: str, spelling: str, snippet_to_access: str) -> str:
    # for void* types
    if type == "void":
        return f'devtools::label(fmt::format("{spelling}: {{}}", {snippet_to_access}).c_str());\n'

    return f'devtools::property("{spelling}", *{snippet_to_access});\n'


def generate_cpp_for_my_builtin_member(type: str, spelling: str, snippet_to_access: str) -> str:
    if type == "gd::string":
        ret = ""

        ret += "{\n"
        ret += "    // gd::string stuffs\n"
        ret += f"    std::string temp = *{snippet_to_access};\n"
        ret += f'    if (devtools::property("{spelling}", temp)) {{\n'
        ret += f"        *{snippet_to_access} = temp;\n"
        ret += "    }\n"
        ret += "}\n"

        return ret

    if type.startswith("geode::SeedValue"):
        ret = ""

        ret += "{\n"
        ret += "    // seed value stuffs\n"
        ret += f"    int temp = *{snippet_to_access};\n"
        ret += f'    if (devtools::property("{spelling}", temp)) {{\n'
        ret += f"        *{snippet_to_access} = temp;\n"
        ret += "    }\n"
        ret += "}\n"

        return ret

    return f'devtools::label("(unknown built in type {type})!!");\n'


def generate_cpp_for_blacklisted_member(type: str, spelling: str, snippet_to_access: str) -> str:
    if type.startswith("std::vector"):
        return "// TODO: std::vector\n"

    if type.startswith("std::array"):
        return "// TODO: std::array\n"

    return f'devtools::label("(unknown stl type {type})!!");\n'


def count_fields(type: Type):
    return len([c for c in type.get_declaration().get_children() if c.kind == CursorKind.FIELD_DECL])


def generate_cpp_for_member(member: Cursor, access: str, force_pointer_arithmetic: bool) -> str:
    base_type = unpointer_type(member.type)
    qualified_type_name = get_qualified_type_name(base_type)

    # gd::string hardcoding since unpointer_type turns it into std::basic_string on windows
    if qualified_type_name == "std::basic_string" and "gd::string" in get_qualified_type_name(member.type):
        qualified_type_name = "gd::string"

    if member.spelling == "":
        return "// empty member name?\n"

    # count the pointage
    # i.e. "float" is 0, "float*" is 1, "float**" is 2
    # float[] is 1 and float[][] is 2
    pointer_depth = 0
    temp_type = member.type.get_canonical()
    while temp_type.kind == TypeKind.POINTER:
        pointer_depth += 1
        temp_type = temp_type.get_pointee()

    while temp_type.kind in [TypeKind.CONSTANTARRAY, TypeKind.INCOMPLETEARRAY, TypeKind.VARIABLEARRAY]:
        pointer_depth += 1
        temp_type = temp_type.get_array_element_type()

    prefix = ""
    if pointer_depth == 0:
        prefix = "&"  # get address so we have a pointer
    elif pointer_depth >= 1:
        prefix = "*" * (pointer_depth - 1)  # deref until we just get a single pointer (is the math right here?)

    # ignore function types, don't generate source for them, parse inline
    if is_function(base_type):
        return f'devtools::label(fmt::format("{get_qualified_name(member)}: function pointer to {{}}", (void*)({prefix}self->{member.spelling})).c_str());\n'

    # ignore anonymous structs, parse inline
    if is_anonymous_type(base_type):
        ret = ""

        ret += f"// inline parsing for anonymous type\n"

        file_path = qualified_type_name.split(os.environ["PLATFORM_DIRECTORY_SEPARATOR"])[-1][:-1]
        ret += f'devtools::pushID("{file_path}");\n'

        is_leaf = count_fields(member.type) == 0
        ret += f'if (devtools::beginTree("{count_fields(member.type)} members for anonymous type at {file_path}:", {"true" if is_leaf else "false"}).unwrapOrDefault()) {{\n'

        for child in member.type.get_declaration().get_children():
            if child.kind == CursorKind.FIELD_DECL:
                ret += f"    {generate_cpp_for_member(child, f"({prefix}{access}{member.spelling})->", force_pointer_arithmetic)}"

        ret += "    devtools::popTree();\n"
        ret += "}\n"

        ret += "devtools::popID();\n"
        return ret

    # parse bitfields inline
    # this doesn't actually ever exist if you disable stuff from winapi and shit
    if member.is_bitfield():
        ret = ""

        ret += f"// inline parsing for bitfield\n"
        ret += "{\n"
        # note: we don't put {prefix} beforehand since there's no reason to deref/address of a bitfield
        ret += f"    bool temp = {access}{member.spelling};\n"
        ret += f'    if (devtools::property("{member.spelling}", temp)) {{\n'
        ret += f"        ({access}{member.spelling}) = temp;\n"
        ret += "    }\n"
        ret += "}\n"

        return ret

    # the way you access a pointer to the type guaranteed
    # if pointer arithmetic is forced (i.e. the class that this member is in is private), then use pointer arithmetic
    if force_pointer_arithmetic:
        offset = member.get_field_offsetof() // 8
        if offset == -1:
            return f'devtools::label("Failed to calculate pointer arithmetic for {member.spelling}! (pointer arithmetic forced)");\n'

        type_casted_to = "void"
        if is_effectively_public(base_type.get_declaration()):
            type_casted_to = qualified_type_name

        snippet_to_access = f"({type_casted_to}*)((uint8_t*)({prefix}{access}) + {offset})"
    else:
        snippet_to_access = f"{prefix}{access}{member.spelling}"

    # use pointer arithmetic for private/protected fields
    if not is_effectively_public(member):
        ret = ""

        access_no_arrow = ""  # baby no money
        if access.endswith("->"):
            access_no_arrow = access[:-2]
        elif access.endswith("."):
            access_no_arrow = f"&{access[:-1]}"

        offset = member.get_field_offsetof() // 8
        if offset == -1:
            return f'devtools::label("Failed to calculate pointer arithmetic for {member.spelling}!");\n'

        # some private members also have a private type
        # and in that case, force more pointer arithmetic
        if not is_effectively_public(base_type.get_declaration()):
            snippet_to_access = f"(void*)((uint8_t*){prefix}{access_no_arrow} + {offset})"
        else:
            snippet_to_access = f"({qualified_type_name}*)((uint8_t*){prefix}{access_no_arrow} + {offset})"

    # for devtools built in types
    if any(qualified_type_name.startswith(thing) for thing in devtools_builtin_types):
        return generate_cpp_for_devtools_builtin_member(qualified_type_name, member.spelling, snippet_to_access)

    # for my built in types
    if any(qualified_type_name.startswith(thing) for thing in my_builtin_types):
        return generate_cpp_for_my_builtin_member(qualified_type_name, member.spelling, snippet_to_access)

    # for other blacklisted functions
    if any(qualified_type_name.startswith(namespace) for namespace in namespace_blacklist):
        return generate_cpp_for_blacklisted_member(qualified_type_name, member.spelling, snippet_to_access)

    # if not, then call whatever function we should...
    ret = ""

    ret += f'devtools::label(fmt::format("{member.spelling}: {qualified_type_name} at {{}}", (void*){snippet_to_access}).c_str());\n'
    ret += f"{function_name_for_class(base_type)}({snippet_to_access});\n"

    return ret


def generate_definition_for_class(type: Type) -> str:
    # even if it is predefined, always generate a definition
    # note that auto* is used here since some types that we need to make a definition for are private
    # and also this is just easier and works better
    return f"void {function_name_for_class(type)}(auto* self);\n"


def generate_cpp_for_class(type: Type) -> str:
    qualified_type_name = get_qualified_type_name(type)

    if any(qualified_type_name.startswith(thing) for thing in do_not_generate_definitions_for):
        return f"// {function_name_for_class(type)} should not be defined for!\n\n"

    ret = ""

    ret += f"// function definition for {qualified_type_name}\n"

    use_pointer_arithmetic = not is_effectively_public(type.get_declaration())
    if use_pointer_arithmetic:
        ret += "// note: pointer arithmetic forced!\n"

    ret += f"void {function_name_for_class(type)}(auto* self) {{\n"

    # nullptr check
    if os.environ["GD_PLATFORM"] == "win":
        # use IsBadReadPtr on windows
        ret += f"    if (IsBadReadPtr(self, {type.get_size()})) {{\n"
        ret += '        devtools::label("(nullptr!)");\n'
        ret += "        return;\n"
        ret += "    }\n\n"
    else:
        ret += "    if ((uintptr_t)self < 0x10000) {\n"
        ret += '        devtools::label("(nullptr!)");\n'
        ret += "        return;\n"
        ret += "    }\n\n"

    # recursion check
    ret += "    if (std::find(g_pointerStack.begin(), g_pointerStack.end(), (void*)self) != g_pointerStack.end()) {\n"
    ret += '        devtools::label("(recursive)");\n'
    ret += "        return;\n"
    ret += "    }\n\n"

    ret += "    g_pointerStack.push_back((void*)self);\n"
    ret += f'    devtools::pushID("{qualified_type_name}");\n'

    # TODO: make stuff look better

    is_leaf = count_fields(type) == 0
    ret += f'    if (devtools::beginTree("{count_fields(type)} members for {qualified_type_name}:", {"true" if is_leaf else "false"}).unwrapOrDefault()) {{\n'

    for child in type.get_declaration().get_children():
        if child.kind != CursorKind.FIELD_DECL or should_skip_for_any_reason(child, for_member_listing=True):
            continue

        ret += f"        // member {get_qualified_name(child)} ({get_qualified_type_name(child.type)})\n"
        ret += textwrap.indent(generate_cpp_for_member(child, "self->", use_pointer_arithmetic), "        ")

    ret += "        devtools::popTree();\n"
    ret += "    }\n"

    ret += f"    devtools::popID();\n"
    ret += "    g_pointerStack.pop_back();\n"

    ret += "}\n\n"

    return ret


def generate_cpp_for_ccnode_class(type: Type) -> str:
    ret = ""

    type_name = get_qualified_type_name(type)
    ret += f"    devtools::registerNode<{type_name}>([]({type_name}* node) {{\n"
    ret += f"        {function_name_for_class(type)}(node);\n"
    ret += f"    }});\n\n"

    return ret


def generate_for_single_platform(platform: str):
    libclang_location = os.environ["LIBCLANG_LOCATION"]
    if libclang_location != "":
        Config.set_library_file(libclang_location)

    db = CompilationDatabase.fromDirectory(os.environ["BUILD_DIR"])  # build/ probably
    index = Index.create()

    compile_commands = db.getCompileCommands("src/headers.cpp")

    if not compile_commands:
        raise GenerationException("Failed to get compile commands! Did you configure the mod?")

    # first arg is path/to/clang++ and last two are -- src/headers.cpp
    args = list(compile_commands[0].arguments)[1:-2]

    print(f"Using {len(args)} arguments taken from compile_commands.json...")
    print("Creating translation unit...")

    tu: TranslationUnit
    try:
        tu = index.parse("src/headers.cpp", args=args)
    except TranslationUnitLoadError as error:
        error.add_note("(Have you configured with CMake, or is CMake still configuring/building?)")
        error.add_note("(If CMake has finished configuring, try compiling, even if it fails!)")
        raise error
    except CompilationDatabaseError as error:
        error.add_note("(Did CMake finishing configuring properly?)")
        raise error

    for diagnostic in tu.diagnostics:
        print(diagnostic)

    if not tu.cursor:
        raise GenerationException("Failed to create translation unit!")

    print("Parsing translation unit (this might take a bit!)...")

    # remove duplicates
    types_required: list[Type] = []
    type_names_seen: list[str] = []
    for type in get_types_required_recursive(tu.cursor):
        type = unpointer_type(type)
        qualified_name = get_qualified_type_name(type)

        if qualified_name in type_names_seen:
            continue

        types_required.append(type)
        type_names_seen.append(qualified_name)

    print(f"{len(types_required)} types found!")

    function_definitions = ""
    for type in types_required:
        function_definitions += generate_definition_for_class(type)

    function_sources = ""
    for type in types_required:
        function_sources += generate_cpp_for_class(type)

    devtools_definitions = ""
    for type in filter_for_ccnode_classes(t for t in types_required):
        devtools_definitions += generate_cpp_for_ccnode_class(type)

    with open(f"src/generated-{platform}.cpp", "w") as file:
        with open("src/template.cpp", "r") as template:
            file.write(
                template.read()
                .replace("/* forward decl */", function_definitions)
                .replace("/* source */", function_sources)
                .replace("/* devtools functions */", devtools_definitions)
            )


def generate_all():
    print("Generating headers.cpp...")
    generate_headers_cpp()
    print("Generating generated.cpp...")
    generate_for_single_platform(os.environ["GD_PLATFORM"])
    print("Done!")


# to use this just open a python shell and run
# > from generate import *
# > profile_self()


def profile_self():
    import cProfile
    import io
    import pstats

    pr = cProfile.Profile(builtins=False)
    pr.enable()
    generate_all()
    pr.disable()

    stream = io.StringIO()
    stats = pstats.Stats(pr, stream=stream).sort_stats(pstats.SortKey.CALLS)
    stats.print_stats()
    print(stream.getvalue())


if __name__ == "__main__":
    generate_all()

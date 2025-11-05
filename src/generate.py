import requests
import json
import pathlib
import time

use_local_codegen = False

# thanks chatgpt
integral_types = [
    # Core integral types
    "bool",
    "char",
    "signed char",
    "unsigned char",
    "wchar_t",
    "char8_t",
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

    # Floating-point types
    "float",
    "double",
    "long double",

    # Fixed-width integer aliases
    "int8_t",
    "uint8_t",
    "int16_t",
    "uint16_t",
    "int32_t",
    "uint32_t",
    "int64_t",
    "uint64_t",

    # Fast minimum-width integer aliases
    "int_fast8_t",
    "uint_fast8_t",
    "int_fast16_t",
    "uint_fast16_t",
    "int_fast32_t",
    "uint_fast32_t",
    "int_fast64_t",
    "uint_fast64_t",

    # Least minimum-width integer aliases
    "int_least8_t",
    "uint_least8_t",
    "int_least16_t",
    "uint_least16_t",
    "int_least32_t",
    "uint_least32_t",
    "int_least64_t",
    "uint_least64_t",

    # Pointer-sized and max-width integer aliases
    "intptr_t",
    "uintptr_t",
    "intmax_t",
    "uintmax_t",

    # Size and difference types
    "size_t",
    "ptrdiff_t",
]

supported_types = [
    *integral_types,
    "std::string",
    "gd::string",
    "cocos2d::ccColor3B",
    "cocos2d::ccColor4B",
    "cocos2d::ccColor4F",
    "cocos2d::CCPoint",
    "cocos2d::CCSize",
    "cocos2d::CCRect"
]

seed_value_types = [
    "geode::SeedValueRS",
    "geode::SeedValueRSV",
    "geode::SeedValueRVS",
    "geode::SeedValueSR",
    "geode::SeedValueSRV",
    "geode::SeedValueSVR",
    "geode::SeedValueVRS",
    "geode::SeedValueVSR"
]

template = """
#include <geode.devtools/include/API.hpp>

// compiled at {fetch_time}

$on_mod(Loaded) {{
    devtools::waitForDevTools([] {{

{source_output}

    }});
}}
""".strip()

std_string_conversion_template = """
#ifdef GEODE_IS_ANDROID
    {{
        std::string temp = node->{field_name};
        if (devtools::property(\"{field_name}\", temp)) {{
            node->{field_name} = temp;
        }}
    }}
#else
    devtools::property(\"{field_name}\", node->{field_name});
#endif
"""

seed_value_conversion_template = """
    {{
        int temp = node->{field_name};
        if (devtools::property(\"{field_name}\", temp)) {{
            node->{field_name} = temp;
        }}
    }}
"""

class_blacklist = [
    "cocos2d::CCNode",
    "GameManager",
    "FMODAudioEngine"
]

# not sure why these explicitly error when all others don't but whatever!
field_blacklist = [
    "m_nChildIndex",
    "m_bPositionDirty",
    "m_fTransformX",
    "m_fTransformY",
    "m_bUseChildIndex",
    "m_bDontPauseSchedulerAndActions",
    "modeA_gravity",
    "modeA_speed",
    "modeA_speedVar",
    "modeA_tangentialAccel",
    "modeA_tangentialAccelVar",
    "modeA_radialAccel",
    "modeA_radialAccelVar",
    "modeA_rotationIsDir",
    "modeB_startRadius",
    "modeB_startRadiusVar",
    "modeB_endRadius",
    "modeB_endRadiusVar",
    "modeB_rotatePerSecond",
    "modeB_rotatePerSecondVar",
    "m_uVAOname",
    "_displayedOpacity",
    "_realOpacity",
    "_displayedColor",
    "_realColor",
    "_cascadeOpacityEnabled",
    "_cascadeColorEnabled",
    "m_startOpacity",
    "m_endOpacity",
    "m_bCompressedInterpolation",
    "m_pForcePrioDict",
    "m_bLocked",
    "m_bToAdd",
    "m_bToRemove",
    "m_pHandlersToAdd",
    "m_pHandlersToRemove",
    "_requestType",
    "m_eDictType"
]

def generate() -> None:
    fetch_time = time.strftime("%a, %d %b %Y %X +0000", time.gmtime())
    parent_dir = pathlib.Path(__file__).resolve().parent


    print("fetching codegen and enum data...")
    # fetch codegen data
    codegen = None
    if use_local_codegen:
        with open(parent_dir / "../build/bindings/bindings/Geode/CodegenData.json", "r") as codegen_file:
            codegen = json.load(codegen_file)
    else:
        codegen = json.loads(requests.get("https://prevter.github.io/bindings-meta/CodegenData-2.2074.json").text)

    # fetch enum data
    raw_enum_data = requests.get("https://raw.githubusercontent.com/geode-sdk/bindings/refs/heads/main/bindings/include/Geode/Enums.hpp").text
    current_enum = None
    found_keys = []
    enum_data = {}
    for line in raw_enum_data.splitlines():
        if line.lstrip().startswith("//"):
            continue

        if line.startswith("enum class"):
            [_, _, name, *_] = line.split(" ")
            current_enum = name
            continue

        if line == "};":
            enum_data[current_enum] = found_keys
            found_keys = []
            current_enum = None
            continue

        if current_enum:
            key_name = line.strip().split(" = ")[0]
            if "[[deprecated" not in key_name: # stupid...
                found_keys.append(key_name)
            continue

    # used to have FMOD_Result as well but i dont think any ccnode that's in the
    # node tree actually uses it (fmodaudioengine)
    enum_data["cocos2d::TextureQuality"] = {
        "kTextureQualityLow",
        "kTextureQualityMedium",
        "kTextureQualityHigh"
    }

    source_output = ""

    print("generating...")

    for class_data in codegen["classes"]:
        if len(class_data["fields"]) == 0:
            continue

        class_name: str = class_data["name"]

        # unsupported class
        if class_name in class_blacklist:
            continue

        queued_output = "" # stuff to put at end (pointers)

        source_output += f"if constexpr (std::is_base_of_v<cocos2d::CCNode, {class_name}>) {{\n"

        source_output += f"devtools::registerNode<{class_name}>([]({class_name}* node) {{\n"

        source_output += f"    devtools::label(\"Members for {class_name}:\");\n"

        for field in class_data["fields"]:
            field_name: str = field["name"]
            field_type: str = field["type"]

            # unsupported member
            if field_name in field_blacklist:
                print(f"skipping unsupported member: {field_name}")
                continue

            # unsupported pointer
            # put in queue to put at end
            if field_type.endswith("*"):
                queued_output += f"    devtools::label(fmt::format(\"{field_type} {field_name} at {{}}\", (void*)node->{field_name}).c_str());\n"
                continue

            # supported enum
            if field_type in enum_data.keys():
                source_output += f"    devtools::enumerable(\"{field_name}\", node->{field_name}, {{\n"

                for enum_value in enum_data[field_type]:
                    source_output += f"        {{ {field_type}::{enum_value}, \"{field_type}::{enum_value}\" }},\n"

                source_output += "    });\n"
                continue

            # seed value
            if field_type in seed_value_types:
                source_output += seed_value_conversion_template.format(field_name=field_name)
                continue

            # unsupported type
            if field_type not in supported_types:
                print(f"skipping unsupported type: {field_type} ({field_name} in {class_name})")
                queued_output += f"    devtools::label(\"{field_type} {field_name}\");\n"
                continue

            # else it's just a supported type
            # we need to convert gd::string to std::string on android
            if field_type == "gd::string":
                source_output += std_string_conversion_template.format(field_name=field_name)
            else:
                source_output += f"    devtools::property(\"{field_name}\", node->{field_name});\n"

        source_output += queued_output

        source_output += "});\n" # devtools registerNode close

        source_output += "}\n\n" # constexpr if close

    print("writing...")

    with open(parent_dir / "generated.cpp", "w") as file:
        file.write(template.format(source_output=source_output, fetch_time=fetch_time))

    parent_parent_dir = parent_dir.parent
    with open(parent_parent_dir / "about.md", "r+") as file:
        data = file.read()
        data = data[:data.rfind("\n")] # remove last line
        data += f"\n(Bindings correct as of {fetch_time})"
        file.seek(0)
        file.truncate()
        file.write(data)

    print("done!")

if __name__ == "__main__":
    generate()

// note: template.cpp will not be compiled on its own (it gets excluded), only generated.cpp will!

#include <geode.devtools/include/API.hpp>

std::vector<void*> g_pointerStack;

// forward definition of functions
/* forward decl */

// source of the functions
/* source */

// calls to devtools api
$on_mod(Loaded) {
    g_pointerStack.reserve(15);

    devtools::waitForDevTools([] {

/* devtools functions */

    });
}

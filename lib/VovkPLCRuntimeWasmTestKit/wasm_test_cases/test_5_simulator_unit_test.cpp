#define __SIMULATOR__
#define __RUNTIME_DEBUG__
#define __RUNTIME_FULL_UNIT_TEST___

#include "common.h"

#include "../../VovkPLCRuntime/src/VovkPLCRuntime.h"

WASM_EXPORT void doSomething() {
    runtime_unit_test();
}
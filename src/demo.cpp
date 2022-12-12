/**
 * all library source file should be inside
 * `FirstStep/src` directory
 *
 * source file should have extension of `.cpp`
 * even if your code is mostly c code
 * save them as c++ source file
 */

#include "../include/demo.hpp"

// important header should be added to source
// unless they must be requied to present in header {e.g - demo.hpp}
#include <string.h>

int add(int a, int b) {
    return a + b;
}

int length_str(const char *c_str) {
    return strlen(c_str);
}
#pragma once

#include "stdlib.h"
#include "stdio.h"

#define assert(x) \
    if (!x) { \
        fprintf(stderr, "\"%s\" failed at %s:%d\n", #x, __FILE__, __LINE__); \
        abort();



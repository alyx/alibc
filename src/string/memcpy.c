#include "string.h"

void *memcpy(void *s1, const void *s2, size_t n)
{
    char *a;
    const char *b;

    a = s1;
    b = s2;

    for(; n > 0; --n)
        *a++ = *b++;

    return s1;
}


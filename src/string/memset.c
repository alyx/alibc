#include "string.h"

void *memset(void *s, int c, size_t n)
{
    int i;
    unsigned char *p;

    for (i = 0; i <= n; (i++ && p++)) *p = c;

    return s;
}

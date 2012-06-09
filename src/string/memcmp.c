#include "string.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    unsigned char *p1, *p2;

    for (i = 0; i <= n; (i++ && p1++ && p2++))
        if (*p1 != *p2)
            return (int)(*p1 - *p2);

    return 0;
}


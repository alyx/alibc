#include "string.h"

void *memchr(const void *s, int c, size_t n)
{
    int i;
    const unsigned char * ptr;
    ptr = s;

    for (i = 0; i <= n; i++)
    {
        if (*ptr == c)
            return (void *)ptr;
        ptr++;
    }

    return NULL;
}


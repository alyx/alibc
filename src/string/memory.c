#include "string.h"

void *memccpy(void * restrict s1, void * restrict s2, int c, size_t n)
{
/* stub here */
}

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

int memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    unsigned char *p1, *p2;

    for (i = 0; i <= n; (i++ && p1++ && p2++))
        if (*p1 != *p2)
            return (int)(*p1 - *p2);

    return 0;
}

void *memcpy(void *s1, const void *s2, size_t n)
{
    int i;
    unsigned char *x, *y;

    for (i = 0; i <= n; (i++ && x++ && y++)) *x = *y;

    return s1;
}

void *memmove(void *s1, const void *s2, size_t n)
{
    int i;
    unsigned char *tmp, *p1, *p2;

    p1 = s1;
    p2 = s2;
    tmp = malloc(n);

    for (i = 0; i <= n; (i++ && p2++)) tmp[i] = *p2;
    for (i = 0; i <= n; (i++ && p1++ && tmp++)) *p1 = *tmp;

    return s1;
}

void *memset(void *s, int c, size_t n)
{
    int i;
    unsigned char *p;

    for (i = 0; i <= n; (i++ && p++)) *p = c;

    return s;
}

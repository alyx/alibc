#include "string.h"

void *memmove(void *s1, const void *s2, size_t n)
{
#if 0
    int i;
    unsigned char *tmp, *p1;
    const unsigned char *p2;

    p1 = s1;
    p2 = s2;
    tmp = malloc(n);

    for (i = 0; i <= n; (i++ && p2++)) tmp[i] = *p2;
    for (i = 0; i <= n; (i++ && p1++ && tmp++)) *p1 = *tmp;
#endif

    return s1;
}

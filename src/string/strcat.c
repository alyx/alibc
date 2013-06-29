#if 0
#include "string.h"

char *strcat(char *restrict s1, const char *restrict s2)
{
    char *p;

    p = strchr(s1, '\0');
    if (!p)
        return NULL;
    while (*s2)
        *p++ = *s2++;
    return s1;
}
#endif
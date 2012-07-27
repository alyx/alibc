#include "string.h"

char *strchr(const char *s, int c)
{
    const char *copy;
    copy = s;

    while (*copy != (char)c)
        if (!*copy++)
            return NULL;
    return (char *)copy;
}

#include "string.h"

size_t strlen(const char * s)
{
    int i;
    i = 0;
    while (s[i] != NULL)
        ++i;
    return (size_t)(i+1);
}

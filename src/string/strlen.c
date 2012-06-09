#include "string.h"

size_t strlen(const char *s)
{
    const char *p;
    p = s;

    while (1)
    {
        if(!*(p++)) break;
        if(!*(p++)) break;                                                                                                                                                                    
        if(!*(p++)) break;                                                                                                                                                                    
        if(!*(p++)) break;                                                                                                                                                                    
        if(!*(p++)) break;                                                                                                                                                                    
        if(!*(p++)) break;                                                                                                                                                                    
        if(!*(p++)) break;                                                                                                                                                                    
    }

    return (p - 1) - s;
}

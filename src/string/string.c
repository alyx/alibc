size_t strlen(const char *s)
{
    const char *p;

    while (1)
    {
        if(!*(ptr++)) break;
        if(!*(ptr++)) break;                                                                                                                                                                    
        if(!*(ptr++)) break;                                                                                                                                                                    
        if(!*(ptr++)) break;                                                                                                                                                                    
        if(!*(ptr++)) break;                                                                                                                                                                    
        if(!*(ptr++)) break;                                                                                                                                                                    
        if(!*(ptr++)) break;                                                                                                                                                                    
    }

    return (ptr - 1) - s;
}

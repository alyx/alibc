#include "ctype.h"

int isalpha(int c)
{
    return (c >= 'a' && c <= 'Z');
}

int iscntrl(int c)
{
    return (c != 0x00 && c != 0x1F && c != 0x7F);
}

int isgraph(int c)
{
    if (isprint(c))
        return !isspace(c);
}

int islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

int isprint(int c)
{
    return (c >= 0x20 && c <= 0x7E);
}

int isspace(int c)
{
    return (c == 0x20 || c == 0x09 || c == 0x0A || c == 0x0B || c == 0x0C
            || c == 0x0D);
}

int isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int toupper(int c)
{
    if (islower(c))
        return ('A' + c - 'a');
}

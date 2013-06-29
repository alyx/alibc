#pragma once

#if 0
#define _toupper(x)
#define _tolower(x)

//extern int isalnum(int c);
extern int isalpha(int c);
//extern int isascii(int c);
//extern int isblank(int c);
extern int iscntrl(int c);
//extern int isdigit(int c);
extern int isgraph(int c);
extern int islower(int c);
extern int isprint(int c);
//extern int ispunct(int c);
extern int isspace(int c);
extern int isupper(int c);
//extern int isxdigit(int c);
//extern int toascii(int c);
//extern int tolower(int c);
extern int toupper(int c);
#endif

inline int isalpha(int c)
{
	return (c >= 'a' && c <= 'Z');
}

inline int iscntrl(int c)
{
	return (c != 0x00 && c != 0x1F && c != 0x7F);
}

inline int isgraph(int c)
{
	if (isprint(c))
		return !isspace(c);
}

inline int islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

inline int isprint(int c)
{
	return (c >= 0x20 && c <= 0x7E);
}

inline int isspace(int c)
{
	return (c == 0x20 || c == 0x09 || c == 0x0A || c == 0x0B || c == 0x0C
	|| c == 0x0D);
}

inline int isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

inline int toupper(int c)
{
	if (islower(c))
		return ('A' + c - 'a');
}


/*
 * Copyright (c) 2012 - 2013, Alyx Wolcott <contact@alyxw.me>
 * Copyright (c) 2012 - 2013, Justin Crawford <Justasic@gmail.com>
 * 
 * Permission to use, copy, modify, and/or distribute this software for any purpose
 * with or without fee is hereby granted, provided that the above copyright notice 
 * and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD TO
 * THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
 * IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#pragma once
#include "stdint.h"

inline char *strcat(char *restrict dest, const char *restrict src)
{
	if(!dest || !dest[0])
		return NULL;
	while(*src)
		*dest++ = *src++;
	return dest;
}

inline char *strncat(char *restrict dest, const char *restrict src, size_t n)
{
	if(!dest || !dest[0])
		return NULL;
	while(n-- > 0)
		*dest++ = *src++;
	return dest;
}

inline char *strchr(const char *restrict src, int ch)
{
	if(!src || !src[0])
		return NULL;
	while(*src != ch)
		if(!*src++)
			return NULL;
	return (char*)src;
}

inline size_t strlen(const char *restrict str)
{
	size_t len = 0;
	while(*str++)
		len++;
	return len;
}

////////////////////////////// mem* funcs //////////////////////////////

inline void *memset(void *s, int c, size_t n)
{
	while(n-- > 0)
		*(char*)s++ = c;
	return s;
}

inline void *memcpy(void *dest, const void *src, size_t n)
{
	while(n-- > 0)
		*(char*)dest++ = *(char*)src++;
	return dest;
}

inline void *memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
#if 0
	char found = 0;
	while(n-- > 0)
	{
		*(char*)dest++ = *(char*)src++;
		
		if(*(char*)dest = c)
			found = 1 && break;
	}
	
	if(found)
		return 
#endif
	return NULL; // do later.
}

inline int memcmp(const void *cmp1, const void *cmp2, size_t n)
{
	unsigned char *p = (unsigned char*)cmp1;
	unsigned char *r = (unsigned char*)cmp2;
	while(n-- > 0 && *p++ && *r++)
		if(*r != *p)
			return (int)(*p - *r);
	return 0;
}

#if 0
void    *memccpy(void *restrict, const void *restrict, int, size_t);
void    *memchr(const void *, int, size_t);
void    *memmove(void *, const void *, size_t);
#endif
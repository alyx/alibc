#ifndef _STRING_H_
#define _STRING_H_

#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

int memcmp(const void *dst, const void *src, size_t n);
void *memcpy(void *dst, const void *src, size_t n);
void *memset(void *p, int c, size_t n);
size_t strlen(const char *s);

#endif
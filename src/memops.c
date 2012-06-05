
#include <inttypes.h>

int memcmp(const void *dst, const void *src, size_t n)
{
  if (!n) return 0;

  while (--n && *(char *) dst == *(char *) src)
  {
    dst = (char *) dst + 1;
    src = (char *) src + 1;
  }

  return *((unsigned char *) dst) - *((unsigned char *) src);
}

void *memcpy(void *dst, const void *src, size_t n)
{
  void *ret = dst;

  while (n--)
  {
    *(char *)dst = *(char *)src;
    dst = (char *) dst + 1;
    src = (char *) src + 1;
  }

  return ret;
}

void *memset(void *p, int c, size_t n)
{
  char *pb = (char *) p;
  char *pbend = pb + n;
  while (pb != pbend) *pb++ = c;
  return p;
}


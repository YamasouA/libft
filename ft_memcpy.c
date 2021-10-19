#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char   *temp;
    unsigned char   *temp2;

    if (!dst && !src)
        return NULL;
    temp = (unsigned char *)dst;
    temp2 = (unsigned char *)src;
    if (n <= 0)
        return dst;
    while (n--)
        *temp++ = *temp2++;
    return dst;
}
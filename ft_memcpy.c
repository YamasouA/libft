#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char   *temp;
    unsigned char   *temp2;

    temp = (unsigned char *)dst;
    temp2 = (unsigned char *)src;
    while (n--)
        *temp++ = *temp2++;
    return dst;
}
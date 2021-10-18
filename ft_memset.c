#include "libft.h"

void    *ft_memset(void *buf, int ch, size_t n)
{
    unsigned char   *temp;

    temp = (unsigned char *)buf;

    while (n--)
        *temp++ = (unsigned char)ch;

    return buf;
}
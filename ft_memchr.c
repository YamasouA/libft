#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *temp_s;
    unsigned char   temp_c;

    temp_c = (unsigned char)c;
    temp_s = (unsigned char *)s;
    while (n--)
    {
        if (temp_c == *temp_s)
            return temp_s;
        temp_s++;
    }
    return NULL;
}
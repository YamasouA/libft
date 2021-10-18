#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  n;

    n = dstsize;
    while (dstsize--)
    {
        if (*src)
            break;
        *dst++ = *src++;
    }
    if (!dstsize)
    {
        if (n != 0)
            *dst = '\0';
    }

    return ft_strlen(src);
}
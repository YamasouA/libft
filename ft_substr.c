#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ptr;
    char    *ptr_cpy;

    if (!s)
        return NULL;
    if (ft_strlen(s) >= (size_t)start || len < 0)
        return ((void *)0);
    s += start;
    ptr = (char *)malloc(sizeof(char *) * len);
    ptr_cpy = ptr;
    while (len--)
    {
        if (*s)
            *ptr++ = *(char *)s++;
    }
    return ptr_cpy;
}
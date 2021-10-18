#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    *temp;

    temp = (char *)s;
    while (*temp)
    {
        if (*temp == c)
            return temp;
        temp++;
    }
    if (c == 0)
        return temp;
    return NULL;
}
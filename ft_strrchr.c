#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char    *temp_s;

    temp_s = (char *)s;
    while (*temp_s++);
    if (c == 0)
        return temp_s;

    while (*temp_s--)
    {
        if (*temp_s == c)
            return temp_s;
    }
    
    return NULL;
}
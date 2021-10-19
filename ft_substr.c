#include "libft.h"

int get_min(long len, long len2)
{
    if (len > len2)
        return len2;
    return len;
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ptr;

    if (s == NULL)
        return NULL;
    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return NULL;
    if (len == 0 || ft_strlen(s) <= start)
    {
        *ptr = '\0';
        return ptr;
    }
    ft_strlcpy(ptr, s + start, get_min(len, ft_strlen(s)) + 1);
    return ptr;
}
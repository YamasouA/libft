#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  n;

    n = ft_strlen(needle);
    if (n == 0)
        return (char *)haystack;
    if (n > len)
        return NULL;
    while (ft_strncmp(haystack, needle, n) != 0)
    {
        haystack++;
        if (ft_strlen(haystack) < n || len < n)
            return NULL;
        len--;
    }
    
    return (char *)haystack;
}
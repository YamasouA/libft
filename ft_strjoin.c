#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *s_join;
    char    *ptr_cpy;

    s_join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    ptr_cpy = s_join;
    if (!s_join)
        return NULL;
    while (*s1)
        *s_join++ = *(char *)s1++;
    while (*s2)
        *s_join++ = *(char *)s2++;
    *s_join = '\0';
    return ptr_cpy;
}
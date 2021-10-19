#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *s_join;
    char    *ptr_cpy;

    if (s1 == NULL || s2 == NULL)
        return NULL;
    s_join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    ptr_cpy = s_join;
    if (s_join == NULL)
        return NULL;
    // while (*s1)
    //     *s_join++ = *(char *)s1++;
    // while (*s2)
    //     *s_join++ = *(char *)s2++;
    ft_strlcpy(s_join, s1, ft_strlen(s1) + 1);
    s_join += ft_strlen(s1);
    ft_strlcat(s_join, s2, ft_strlen(s2) + 1);
    return ptr_cpy;
}
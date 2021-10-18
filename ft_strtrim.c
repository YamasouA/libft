#include "libft.h"

int in_string(char const *s1, char const *set)
{
    while (*set)
    {
        if (*s1 == *set++)
            return 1;
    }
    return 0;
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *ptr;
    int     cnt;
    char    *cpy;

    cnt = 0;
    cpy = (char *)s1;
    while (*s1)
    {
        if (!in_string(s1, set))
            cnt++;
        s1++;
    }
    ptr = (char *)malloc(sizeof(char *) * cnt);
    s1 = cpy;
    cpy = ptr;
    while (*s1)
    {
        if (in_string(s1, set))
            *ptr++ = *(char *)s1;
        s1++;
    }
    return cpy;
}
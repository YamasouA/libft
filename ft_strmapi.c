#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int , char))
{
    size_t  len;
    char    *ptr;
    int     idx;

    len = ft_strlen(s);
    ptr = (char *)malloc(sizeof(char *) * len + 1);
    if (!ptr)
        return NULL;
    if (!f)
        return NULL;
    idx = 0;
    while (s[idx])
    {
        ptr[idx] = f(idx, s[idx]);
        idx++;
    }
    ptr[idx] = '\0';
    return ptr;
}
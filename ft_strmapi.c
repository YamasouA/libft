#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int , char))
{
    size_t  len;
    char    *ptr;
    int     idx;

    if (s == NULL)
        return NULL;
    len = ft_strlen(s);
    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return NULL;
    if (f == NULL)
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
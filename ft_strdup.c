#include "libft.h"

char    *strdup(const char *s1)
{
    size_t  len;
    char    *sp;
    size_t  i;

    i = 0;
    len = ft_strlen(s1);
    sp = (char *)malloc(len + 1);
    if (sp)
    {
        while (i++ <= len)
        {
            sp[i] = s1[i];
        }
    }
    return sp;
}
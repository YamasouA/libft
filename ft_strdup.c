#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t  len;
    char    *sp;

    len = ft_strlen(s1);
    sp = (char *)malloc(len + 1);
    if (sp == NULL)
        return NULL;
    ft_strlcpy(sp, s1, len + 1);
    return sp;
}
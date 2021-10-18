#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *temp_s1;
    unsigned char   *temp_s2;

    temp_s1 = (unsigned char *)s1;
    temp_s2 = (unsigned char *)s2;
    while (n--)
    {
        if (*temp_s1 > *temp_s2)
            return *temp_s1 - *temp_s2;
        else if (*temp_s2 > *temp_s1)
            return *temp_s1 - *temp_s2;
    }
    return 0;
}
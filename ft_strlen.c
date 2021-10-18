#include "libft.h"

size_t  ft_strlen(const char *str)
{
    size_t cnt;

    cnt = 0;
    while (*str++)
        cnt++;
    return cnt;
}
#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;

    i = 0;
    sign = -1;
    while (*str == ' ' || *str == '\f' || *str == '\n'
            || *str == '\r' || *str == '\t' || *str == '\v')
            str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            i = (*str - '0') + i * 10;
        else
            break;
        str++;
    }
    i *= sign;
    return (i);
}
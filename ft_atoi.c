#include "libft.h"

int ft_isspace(const char *str)
{
    if (*str == ' ' || *str == '\f' || *str == '\n'
            || *str == '\r' || *str == '\t' || *str == '\v')
            return 1;
    else
        return 0;
}

int isoverflow(const char str, long i)
{
    if ((LONG_MIN + (str - '0')) / 10 < i
        && i < (LONG_MAX - (str - '0')) / 10)
        return 1;
    else
        return 0;
}

int ft_atoi(const char *str)
{
    long    i;
    int     sign;

    i = 0;
    sign = 1;
    while (ft_isspace(str))
            str++;
    while (*str == '-' || *str == '+')
        sign *= -1 * (*str++ - 44);
    while (ft_isdigit(*str))
    {
        if (*str >= '0' && *str <= '9')
        {
            if (isoverflow(*str, i))
                i = sign * (*str - '0') + i * 10;
            else if (sign == -1)
                    return (int)LONG_MIN;
            else 
                return (int)LONG_MAX;
        }
        str++;
    }
    return (int)i;
}
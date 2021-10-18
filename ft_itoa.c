#include "libft.h"

int count(int n)
{
    long    n_cpy;
    int     cnt;

    n_cpy = (long)n;
    cnt = 0;
    if (n_cpy < 0)
        n_cpy *= -1;
    if (n_cpy == 0)
        return 1;
    while (n_cpy > 0)
    {
        cnt++;
        n_cpy /= 10;
    }
    return cnt;
}

char    *ft_itoa(int n)
{
    long    n_cpy;
    int     len;
    char    *ptr;
    char    *ptr_cpy;
    
    n_cpy = (long)n;
    len = count(n);
    ptr = (char *)malloc(sizeof(char *) * len);
    ptr_cpy = ptr;
    if (n_cpy < 0)
    {
        n_cpy *= -1;
        *ptr++ = '-';
    }
    while (n_cpy > 0)
    {
        *ptr++ = (n_cpy % 10) + '0';
        n_cpy /= 10;
    }
    return ptr_cpy;
}
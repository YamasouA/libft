#include "libft.h"

void ft_putnbr(long n, int fd)
{
    char    s;

    s = '0';
    if (n <= 9)
    {
        s += n;
        write(fd, &s, 1);
    }
    else
    {
        ft_putnbr(n / 10, fd);
        s += n % 10;
        write(fd, &s, 1);
    }
}

void    ft_putnbr_fd(int n, int fd)
{
    long    ln;

    ln = (long)n;
    if (ln < 0)
    {
        ln *= -1;
        write(fd, "-", 1);
    }
    ft_putnbr(ln, fd);
}
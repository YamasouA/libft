#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) > 0 || ft_isdigit(c) > 0)
        return c;
    else
        return 0;
}

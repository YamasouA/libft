#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int cnt;

    cnt = 1;
    while (!lst->next)
    {
        cnt++;
        lst = lst->next;
    }
    return cnt;
}
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int cnt;

    cnt = 1;
    if (lst == NULL)
        return 0;
    while (lst->next != NULL)
    {
        cnt++;
        lst = lst->next;
    }
    return cnt;
}
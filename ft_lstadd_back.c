#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    if (lst == NULL)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    t_list   *lst_last;
    lst_last = ft_lstlast(*lst);
    lst_last->next = new;
}
#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list *start;

    if(!lst || !new)
        return ;
    start = *lst;
    new ->next = start;
    *lst = new;
}
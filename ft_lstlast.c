#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    t_list last;
    size_t i;

    i = 0;
    while(lst)
    {
        if(!lst->next)
            return (lst);
        lst = lst->next;
    }
    return (lst);
}

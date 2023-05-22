#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start;
	t_list	*tmp;

	if (!del)
		return ;
	start = *lst;
	while (start)
	{
		tmp = start;
		del(tmp->content);
		start = start->next;
		free(tmp);
	}
	*lst = NULL;
}

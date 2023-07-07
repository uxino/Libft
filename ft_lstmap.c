/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:36:06 by museker           #+#    #+#             */
/*   Updated: 2023/07/07 13:12:03 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new_list;
	t_list	*current;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	start = lst;
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	current = new_list;
	while (start->next)
	{
		start = start->next;
		new_node = ft_lstnew(f(start->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		current->next = new_node;
		current = current->next;
	}
	return (new_list);
}

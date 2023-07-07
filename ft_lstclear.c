/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:55:06 by museker           #+#    #+#             */
/*   Updated: 2023/07/06 20:05:52 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
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
		start = start -> next;
		free(tmp);
	}
	*lst = NULL;
}

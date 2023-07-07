/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:06:50 by museker           #+#    #+#             */
/*   Updated: 2023/07/06 10:24:26 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	count_word(const char *p, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (p[i])
	{
		while (p[i] == c && p[i])
			i++;
		if (p[i] != c && p[i])
		{
			len++;
			while (p[i] != c && p[i])
				i++;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	i;
	size_t	tmp;
	size_t	h_y;

	i = 0;
	h_y = 0;
	list = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!list)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		tmp = i;
		while (s[tmp] && s[tmp] != c)
			tmp++;
		if (count_word(s, c) == h_y)
			break ;
		list[h_y++] = ft_substr(s, i, tmp - i);
		i = tmp;
	}
	list[h_y] = 0;
	return (list);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: museker <museker@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:21:20 by museker           #+#    #+#             */
/*   Updated: 2023/07/04 12:21:36 by museker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, lens1 + 1);
	ft_strlcat(p, s2, lens1 + lens2 + 1);
	return (p);
}

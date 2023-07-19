#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	last_index;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	last_index = ft_strlen(s1) -1;
	while (ft_strchr(set, s1[last_index]) && last_index)
		last_index--;
	p = ft_substr(s1, i, last_index - i + 1);
	return (p);
}

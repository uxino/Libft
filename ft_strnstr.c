#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			p = i;
			while (haystack[i] == needle[j] && haystack[i] && i < len)
			{
				i++;
				j++;
			}
			if (!needle[j])
				return ((char *)haystack + p);
			i = p;
		}
		i++;
	}
	return (NULL);
}

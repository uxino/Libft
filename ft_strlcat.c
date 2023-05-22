#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i])
        i++;
    while (src[i] && i < dstsize - 1)
    {
        dst[i] = src[j];
        j++;
        i++;
    }
    dst[i] = '\0';
    if (dstsize < i)
        return (dstsize + ft_strlen(src));
    else
        return (i + ft_strlen(src));
}

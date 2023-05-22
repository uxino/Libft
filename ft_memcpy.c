#include <stdio.h>
void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *tmp_dst;
    char *tmp_src;

    if(!dst && !src)
        return (NULL);
    i = 0;
    tmp_dst = (char *)dst;
    tmp_src = (char *)src;
    while (i<n)
    {
        tmp_dst[i] = tmp_src[i];
        i++;
    }
    return (dst);
}

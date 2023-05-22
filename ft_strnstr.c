#include <stdio.h>
#include <string.h>
size_t ft_strlen(const char *str);

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    if (!(needle[i]))
    {
        return ((char *)haystack);
    }
    
    while (haystack[i] && i< len - 1)
    {
        if (haystack[i] == needle[j])
        {
            while (haystack[i] == needle[j] && haystack[i])
            {
                i++;
                j++;
            }
            if (ft_strlen(needle) == j)
            {
                return ((char *)haystack + i);
            }
        }
        i++;
    }
    return NULL;
}

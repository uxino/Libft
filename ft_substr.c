#include <stdio.h>
#include <stdlib.h>
char    *ft_strdup(const char *s);
size_t  ft_strlen(const char *str);

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *p;
    size_t i;
    size_t s_len;

    s_len = ft_strlen(s);
    if (!s)
        return (NULL);
    if (start >=s_len || s_len == 0 || len == 0)
        return (ft_strdup(""));
    if(len> s_len - start)
        len = s_len - start;
    p = (char *)malloc(sizeof(char) * len +1);
    if(!p)
        return (NULL);
    i = 0;
    while (s[start +i] && i < len)
    {
        p[i] = s[start +i];
        i++;
    }
    p[i] = '\0';
    return (p);
    
}

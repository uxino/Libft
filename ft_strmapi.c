#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
    
}
char toup(unsigned int i, char c)
{
  if (i % 2 == 0)
  {
    c -= 32;
  }
  return (c);
}


char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    char *p;
    size_t i;

    i = 0;
    len = ft_strlen(s);
    p = (char *)malloc(sizeof(char) * (len + 1));
    if(!p)
        return (NULL);
    while (i<len)
    {
        p[i] = (*f)(i,s[i]);
        i++;
    }
    p[len] = '\0';
    return (p);
}
int main()
{

    const char *p = "aaaaaa";
    printf("%s",ft_strmapi(p,&toup));
    return (0);
}

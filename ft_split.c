#include "libft.h"

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
char    *ft_strdup(const char *s) // stringi mallocta yer açıp kopyalar
{
    int i;
    char *p;
    int len;

    len = ft_strlen(s);
    i = 0;
    p = (char *)malloc(sizeof(char) * (len + 1));
    if (!p)
    {
        return (NULL);
    }
    while (s[i])
    {
        p[i] = s[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}

char    *ft_substr(char const *s, unsigned int start, size_t len) // index mantığıyla böler, mallocla yer açar ve döndürür
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


size_t count_word(const char *p,char c)
{
    size_t i;
    size_t len;

    i = 0;
    len = 0;

    while (p[i])
    {
        while (p[i] == c)
        {
            i++;
            if(p[i] != c)
                len++;
        }
        i++;
    }
    return (len + 1);
}
char    **ft_split(char const *s, char c)
{
  char    **list;
  size_t  i;
  size_t  tmp;
  size_t  h_y;
  
  i = 0;
  h_y = 0;
  list = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
  
  while (s[i])
  {
    while (s[i] && s[i] == c)
    {
      i++;
    }
    tmp = i;
    while (s[tmp] && s[tmp] != c)
      tmp++;
    list[h_y++] = ft_substr(s, i, tmp - i);
    i = tmp;
  }
  list[h_y] = 0;
  return (list);
}
int main()
{
    char **p = ft_split("aaa bbb ccc",' ');
    
    printf("%s", *(p+2));
}

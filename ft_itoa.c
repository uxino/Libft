#include "libft.h"

size_t count_len(int n)
{
    size_t i;

    i = 0;
    if(n == 0)
        return (1);
    if(n == -2147483648)
    {
        n = 147483648;
        i = 2;
    }
    if(n<0)
    {
        n *= -1;
        i = 1;
    }
    while(n)
    {
        i++;
        n /= 10;
    }
    return (i);
}
char *ft_itoa(int n)
{
    size_t len;
    char *p;

    len = count_len(n);
    p = (char *)malloc(sizeof(char) * (len + 1));
    if(!p)
        return (NULL);
    if(n == -2147483648)
    {
        p[0] = '-';
        p[1] = '2';
        n =  147483648;
    }
    if(n<0)
    {
        p[0] = '-';
        n *= -1;
    }
    
    if (n == 0)
        p[0] = '0';
    p[len] = '\0';
    while(n)
    {
        p[len - 1] = (n%10) + '0';
        n /=10;
        len--;
    }
    return (p);
}

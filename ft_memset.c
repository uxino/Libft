#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *ft_memset(void *a,int c, size_t len)
{
    size_t i;
    unsigned char *str;

    i = 0;
    str = (unsigned char *)a;
    while (i<len)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (a);
}
int main()
{
    int *p = (int *)malloc(sizeof(int) * 5);
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    memset(p,30,sizeof(int) * 3);
    int i = 0;
    while (i<3)
    {
        printf("%d  ",(char)p[i]);
        i++;
    }
}

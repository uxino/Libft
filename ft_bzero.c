#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void *ft_bzero(void *s, size_t n)
{
    char *p;
    size_t i;

    i = 0;
    p = (char*)s;
    while (i < n)
    {
        p[i] = '\0';
        i++;
    }
    return (s);
}
int main()
{
    int *p = (int *)malloc(sizeof(int) * 3);
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    bzero(p,3);
    int i = 0;
    while (i<3)
    {
        printf("%d  ",p[i]);
        i++;
    }

}

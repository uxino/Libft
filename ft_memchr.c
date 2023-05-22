#include <stdio.h>
#include <string.h>
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    if(!n)
        return (NULL);
    while (i<n)
    {
        if(((unsigned char *)s)[i] == (unsigned char)c)
            return ((unsigned char *) s + i);
        i++;
    }
    return (NULL);
}
int main() {
    char str[] = "Hello, World!";
    int search = 'W';
    size_t n = strlen(str);

    char* result = ft_memchr(str, search, n);
    printf("%s", result);

    return 0;
}
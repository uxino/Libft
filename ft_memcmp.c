#include <stdio.h>
int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (i<n)
    {
        if(str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
int main ()  
{  
int result = 0;  

char strng1[20] = "memoryblock1";  
char strng2[20] = "sizeofthemem";  
result = ft_memcmp(strng1, strng2, 8);  
if(result > 0)  
{  
printf("The size of strng1 is more than the size of strng2");  
}  
else if(result < 0)  
{  
printf("The size of strng1 is less than the size of strng2");  
}  
else  
{  
printf("The size of strng1 is equal to the size of strng2");  
}  
return 0;  
} 
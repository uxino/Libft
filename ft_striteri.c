#include <stdio.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    
    if(s || f)
    {
        while (s[i])
        {
            f(i,&s[i]);
            i++;
        }
    }
}
void toup(unsigned int i, char *c)
{
  if ((*c>='A') && (*c <= 'Z'))
  {
    *c += 32;
  }
  else
    *c-= 32;

}
int main()
{
    char p[] = "aaaAAAAaa";
    ft_striteri(p,&toup);
    printf("%s",p);

}

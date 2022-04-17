#include <unistd.h> 
#include "ft_strlen.c"

/**
prints out an given string 
*/

void     ft_putstr(char *str)
{
   int      b;
   int      i;
   
   b = ft_strlen(str);
   i = 0;
   while (b >= 0)
   {
      write(1, &str[i], 1);
      i++;
      b--;
   }
}

/* 
int main(void)
{
   char array[40] = "hello opfer";
   ft_putstr(array);
   printf("\n");
} 
 */
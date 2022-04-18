#include <stdio.h>

/**
function returns the square root of given number
if input has no square root or is invalid, function returns 0
*/

int       ft_sqrt(int nb)
{
     int i;
     
     i = 1;
     while (i < nb)
     {
          if (i * i == nb)
          {
               return (i);
          }
          i++;
     }
     return (0);
}

/* 
int main(void)
{
     int b = 24;
     int r;
     r = ft_sqrt(b);
     printf("%d\n", r);
}
 */
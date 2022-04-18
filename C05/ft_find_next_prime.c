#include <stdio.h>

/**
function displays the next possible prime number based on the entered number
if the given number is prime, the function returns that number
*/

int       ft_find_next_prime(int nb)
{
     int       count;
     int       i;

     i = 2;
     count = 0;
     if (nb <= 2)
          return (2);
     while (i < nb)
     {
          while (count != 1 && i < nb)
          {
               if (i != nb && nb % i == 0)
                    count = 1;
               i++;
          }
          if (count == 0)
               return (nb);
          if (i == nb || count == 1)
          {
               i = 2;
               return (ft_find_next_prime(nb + 1));
          }
     }
     return (0);
}

/* 
int main(void)
{
     int nb = -23;
     int b;
     b = ft_find_next_prime(nb);
     printf("%d\n", b);
}
 */
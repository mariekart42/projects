#include <stdio.h>

/**
function checks if the given number is a prime number [returns 1] or not [returns 0]
*/

int       ft_is_prime(int nb)
{
     int       count;
     int       i;

     i = 2;
     count = 0;
     if (nb <= 2)
          return (0);
     while (i < nb)
     {
          if (nb % i == 0)
               count++;
          i++;
          if (count > 0 )
               return (0);
     }
     return (1);
}

/* 
int main(void)
{
     int       b;
     int       r;

     b = 1;
     r = ft_is_prime (b);
     printf ("%d\n", r);    
}
*/
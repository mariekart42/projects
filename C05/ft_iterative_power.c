#include <stdio.h>

/**
without using recursion
calculates the given power of an given number in range int 
*/

int       ft_iterative_power(int nb, int power)
{
     int       k;
     int       result;

     k = 1;
     if (power == 0)
          return (1);
     while (power >= 1)
     {
          k *= nb;
          power--;
     }
     return (k);
}

/* 
int main(void)
{
     int       num;
     int       power;
     int       result;

     num = 4;
     power = 8;
     result = ft_iterative_power (num, power);
     printf ("%d\n", result);
}
 */
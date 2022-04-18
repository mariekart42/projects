#include <stdio.h>

/**
using recursion
calculates the given power of an given number in range int 
*/

int       ft_recursive_power(int nb, int power)
{
     if(power >= 1)
     {
          return (nb * ft_recursive_power (nb, power - 1));
     }
     else 
     {
          return (1);
     }
}

int main()
{
     int num = 2;
     int power = 2;
     int b;
     b = ft_recursive_power(num, power);
     printf("%d\n", b);
}

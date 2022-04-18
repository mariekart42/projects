#include <stdio.h>

/**
function calculates the factorial of an given number 
if passed invalid nb function returns 0
! function is equal to "ft_iterative_factorial" but got solved with recursion
*/


int       ft_recursive_factorial(int nb)
{
     if (nb >= 1)
     {
          return (nb * ft_recursive_factorial (nb - 1));
     }
     else
     {
          return (1);
     }
}

/* 
int main()
{
     int num = 5;
     int b;
     b = ft_recursive_factorial(num);
     printf("%d\n", b);
}
 */
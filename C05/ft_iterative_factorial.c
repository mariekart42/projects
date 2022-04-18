#include <stdio.h>

/**
function calculates the factorial of an given number 
if passed invalid nb function returns 0
*/

int ft_iterative_factorial(int nb)
{
    int        i;

    i = 1;
    while (nb > 0)
    {
         i *= nb;
         nb--;
    }
    return (i);
}

/* 
int main()
{
     int num = 'b';
     int b;
     b = ft_iterative_factorial(num);
     printf("%d\n", b);
}
 */
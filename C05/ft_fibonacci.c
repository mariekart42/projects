#include <stdio.h>

/**
function returns the Nth number (index) of the fibonacci sequence
if negative input function returns '-1'
*/

int ft_fibonacci(int index)
{
     if (index < 0)
          return (-1);
     if (index <= 1)
     {
          return (index);
     }
     else 
     {    
          return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
     }

}
/* 
int main(void)
{
     int       index;
     int       b;

     index = 2; 
     b = ft_fibonacci (index);
     printf ("%d\n", b);    
}
 */

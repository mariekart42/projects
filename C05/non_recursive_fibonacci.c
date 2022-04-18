#include <stdio.h>

/**
[not a C Project, just want to do it]
function returns the Nth number (index) of the fibonacci sequence
if negative input function returns '-1'
~ function works without recursion
*/

int       non_recursive_fibonacci(int index)
{
     int       i;
     int       k;
     int       res;
     int       stop;

     if (index < 0)
          return (-1);
     i = 0;
     k = 0;
     stop = 0;
     while (index >= 0)
     {
          res = i + k;
          i = k;
          k = res;
          index--;
          if (k == 0)    
               k++;
          if (k == 1 && i == 1 && stop != 1)
          {
               i--;
               stop = 1;
          }
     }
     return (res);
}
/* 
int main(void)
{
     int       index;
     int       b;

     index = 4; 
     b = non_recursive_fibonacci (index);
     printf ("%d\n", b);    
}
 */
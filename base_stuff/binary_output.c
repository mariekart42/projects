#include <unistd.h>
#include <stdio.h>

/**
converts num with decimal base into num with binary base
*/

void      binary_number(int nbr)
{
     int i;
     
     i = 256;
     while (i >= 1 && nbr < 256)
     {
          if (nbr >= i)
          {
               write (1, "1", 1);
               nbr -= i; 
          }
          else if (i != 256)
          {
               write (1, "0", 1);
          }
          i /= 2; 
     }
     return ;
}
/* 
int main(void)
{
     int b = 8;
     binary_number(b);
     printf("\n");
}
 */
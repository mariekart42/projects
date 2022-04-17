#include <unistd.h>
#include <stdio.h>

/**
convert num with decimal base into num with hex base
takes int long
*/

void      hex_output (int long nbr)
{
     int long       k;

     if(nbr < 0)
     {
          nbr *= -1;
          write (1, "-", 1);
     }
     if (nbr >= 16)                         //16 cause F is 15
     {
          hex_output (nbr / 16);
          hex_output (nbr % 16);
     }
     if (nbr < 16 && nbr > 9)
     {
          nbr = nbr + 7 + '0';
          write (1, &nbr , 1);
     }
     if (nbr < 16)
     {
          nbr = nbr + '0';
          write (1, &nbr, 1);
     }
     return ;
}
/* 
int main()
{
     int long b = 4294967295;
     hex_output(b);
}
 */
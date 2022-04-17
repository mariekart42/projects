#include <stdio.h>
#include <unistd.h>

/**
convert num with decimal base into num with octal base
takes int long
*/

void      octal_output(int nbr)
{
     int long       k;

     if (nbr < 0)
     {
          nbr *= -1;
          write (1, "-", 1);
     }
     if (nbr >= 8)                         
     {
          octal_output (nbr / 8);
          octal_output (nbr % 8);
     }
     if (nbr < 8)
     {
          nbr = nbr + '0';
          write (1, &nbr, 1);
     }
     return ;
}

int main(void)
{
     int b = 42;
     octal_output(b);
     printf("\n");
}
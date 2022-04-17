#include <stdio.h>
#include <unistd.h>

/**
convert num with decimal base into num with decimal, binary, hex or octal base
takes int long for hex and octal (int for binary and decimal)
*/

void      octal_and_hex_output(int long nbr, int base)
{
     int long       k;

     if (nbr < 0)
     {
          nbr *= -1;
          write (1, "-", 1);
     }
     if (nbr >= base)                         
     {
          octal_and_hex_output (nbr / base, base);
          octal_and_hex_output (nbr % base, base);
     }
     if (base == 16 && nbr < 16 && nbr > 9)
     {
          nbr = nbr + 7 + '0';
          write (1, &nbr , 1);
     } 
     if (nbr < base)
     {
          nbr = nbr + '0';
          write (1, &nbr, 1);
     }
     return ;
}
/* 
int main(void)
{
     int long b = 42;
     int base = 16;
     octal_and_hex_output (b, base);
}
 */
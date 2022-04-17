#include <stdio.h>
#include <unistd.h>

void octal_and_hex_output (int long nbr, int base)
{
     int long k;
     //largest number: 16777215
     if(nbr < 0)
     {
          nbr *= -1;
          write(1, "-", 1);
     }
     if(nbr >= base)                         
     {
          octal_and_hex_output(nbr / base, base);
          octal_and_hex_output(nbr % base, base);
     }
     if(base == 16 && nbr < 16 && nbr > 9)
     {
          nbr = nbr + 7 + '0';
          write(1, &nbr , 1);
     } 
     if(nbr < base)
     {
          nbr = nbr + '0';
          write(1, &nbr, 1);
     }
     return ;
}

int main()
{
     int long b = 42;
     int base = 16;
     octal_and_hex_output(b, base); 
}
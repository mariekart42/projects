#include <unistd.h>
#include <stdio.h>

/**
converts numbers with decimal base into num with decimal, binary, hexadecimal or octal base
handels also negative nums
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

void      binary_number(int nbr)
{
     int       i;
     
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

int       ft_strcmp(char *s1, char *s2)
{
     int i;
     
     i = 0;
     while (s1[i] != '\0' || s2[i] != '\0')
     {
          if (s1[i] < s2[i])
          {
               return -1;
          }
          else if (s1[i] > s2[i])
          {
               return 1;
          }   
          i++;
     }
     return 0;
}

void      ft_putnbr(int nbr)
{
     if (nbr == -2147483648 )
     {
          write (1, "-2147483648", 11);
          return ;
     }
     if (nbr < 0)
     {
          write (1, "-", 1);
          nbr *= -1;
     }
     if (nbr > 9)
     {
          ft_putnbr (nbr / 10);
          ft_putnbr (nbr % 10);
     }
     if (nbr <= 9)
     {
          nbr = nbr + '0';
          write (1, &nbr, 1);
     }
}

void      ft_putnbr_base(int nbr, char *base)
{
     int i;
     
     i = 0;
     if (ft_strcmp (base, "10") == 0)
     {
          ft_putnbr (nbr);
     }
     else if (ft_strcmp (base, "2") == 0)
     {
          binary_number (nbr);
     }
     else if (ft_strcmp (base, "16") == 0)
     {
          octal_and_hex_output (nbr, 16);
     }
     else if (ft_strcmp (base, "8") == 0)
     {
          octal_and_hex_output (nbr, 8);
     }
}
/* 
int main(void)
{
     char array[3] = "2";
     int number = -42;

     ft_putnbr_base (number, array); 
     printf ("\n");
}
*/
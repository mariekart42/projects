#include <unistd.h>

/**
prints the number out that is given in (range int)
*/

void      ft_putnbr(int nb)
{
     if (nb == -2147483648 )
     {
          write (1, "-2147483648", 11);
          return ;
     }
     if (nb < 0)
     {
          write (1, "-", 1);
          nb *= -1;
     }
     if (nb > 9)
     {
          ft_putnbr (nb / 10);
          ft_putnbr (nb % 10);
     }
     if (nb <= 9)
     {
          nb = nb + '0';
          write (1, &nb, 1);
     }
}
/* 
int main(void)
{
     ft_putnbr(83647);
}
 */
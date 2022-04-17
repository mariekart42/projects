#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
displays only the digits out of a char array
say if its negative or positive by counting the amount of '-' signs 
(if even -> positiv, if uneven -> negativ)
*/

void      ft_atoi(char *str)
{
     int       i;
     int       count;

     i = 0;
     count = 0;
     while (str[i] != '\0')
     {
          if (str[i] == '-')
               count++;
          i++;
     }
     i = 0;
     if (count % 2 != 0)
          write (1, "-", 1);
     while (str[i] != '\0')
     {
          if (str[i] <= 57 && str[i] >= 48)
               write (1, &str[i], 1);   
          i++;
     }
     write (1, "\n", 1);
}
/* 
int main(void)
{
     char array[70] = "---1qc2wc345wc6789TZFa";
     int b;
     ft_atoi(array);
} 
*/
#include <stdio.h>

/**
returns the lengh of a string 
*/

int		ft_strlen (char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i); 
}

/* 
int main()
{
	char array[30] = "blah";
	int len;
	len = ft_strlen(array);
	printf("%d\n", len); 
}  */

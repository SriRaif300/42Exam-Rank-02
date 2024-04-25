char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char aux;

	while (str[i])
		i++;
	i--;
	while (j < i)
	{
		aux = str[j];
		str[j] = str[i];
		str[i] = aux;
		i--;
		j++;
	}
	return (str);
}

#include <stdio.h>

int main(int a, char **b)
{
	if (a == 2)
		ft_strrev(b[1]);
    	printf ("%s\n", b[1]);
}

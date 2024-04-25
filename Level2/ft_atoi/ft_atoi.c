int	ft_atoi(const char *str)
{
	int i = 0;
	int sing = 1;
	int result = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sing *= -1;
		i++;
	}
	else
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sing);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi("-1000"));
}*/

int	verify(char c, int base)
{
	if (c >= 'A' && c <= 'F')
		return (1);
	if (c > ("0123456789abcdef")[base - 1])
		return (0);
	if (c >= '0' && c<= '9')
		return (1);
	if (c >= 'a' && c <= 'f')
		return (1);
	return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int result = 0;
	int sing = 1;

	while (str[i] >= 9 && str[i] <= 13 && str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sing = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && verify(str[i], str_base))
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		if (str[i] >= 'a' && str[i] <= 'f')
			result += (str[i] - 'a') + 10;
		if (str[i] >= 'A' && str[i] <= 'F')
			result += (str[i] - 'A') + 10;
		i++;
	}
	return (result * sing);
}

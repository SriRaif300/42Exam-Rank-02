#include <unistd.h>

int	check(char *str, char c, int len)
{
	int i = 0;

	while(str[i] && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int a, char **b)
{
	if (a == 3)
	{
		int i = 0;
		while (b[1][i])
		{
			if (!check(b[1], b[1][i], i) && check(b[2], b[1][i], -1))
				write(1, &b[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

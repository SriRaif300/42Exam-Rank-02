#include <unistd.h>

void put_str(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int a, char **b)
{
	if (a == 3)
	{
		int i = 0;
		int j = 0;

		while(b[2][i])
		{
			if (b[1][j] == b[2][i])
				j++;
			i++;
		}
		if (!b[1][j])
			put_str(b[1]);
	}
	write(1, "\n", 1);
}

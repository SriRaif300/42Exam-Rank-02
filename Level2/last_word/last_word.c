#include <unistd.h>

void last_word(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] >= 33 && str[i + 1] <= 126)
            len = i + 1;
		i++;
	}
	while (str[len] >= 33 && str[len] <= 126)
	{
		write(1, &str[len], 1);
		len++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

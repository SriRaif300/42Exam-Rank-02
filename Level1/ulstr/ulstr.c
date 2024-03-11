#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			putchar(str[i] - 32);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			putchar(str[i] + 32);
		else
			putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
}

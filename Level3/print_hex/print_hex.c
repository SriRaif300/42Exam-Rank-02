#include <unistd.h>

int miniatoi(char *str)
{
	int i;
	int resul;

	i = 0;
	resul = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resul *= 10;
		resul += str[i] - '0';
		i++;
	}
	return (resul);
}

void print_hex(int n)
{
	char *hex = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int main(int argc, char **argv)
{
	int n;

	if (argc == 2)
	{
		n = miniatoi(argv[1]);
		print_hex(n);
	}
	write(1, "\n", 1);
}

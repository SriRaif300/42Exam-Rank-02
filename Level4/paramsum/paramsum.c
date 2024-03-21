#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);	
}

void putnum(int num)
{
	if (num >= 10)
		putnum(num / 10);
	num = num % 10;
	putchar(num + '0');
}

int main(int argc, char **argv)
{	
	putnum(argc - 1);
	write(1, "\n", 1);
}

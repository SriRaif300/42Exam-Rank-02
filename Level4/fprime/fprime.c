#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = atoi(argv[1]);
		int i = 2;

		if (num == 1)
			printf("1");
		while (num >= i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
					break ;
				printf("*");
				num /= i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
}

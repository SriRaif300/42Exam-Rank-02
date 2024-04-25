#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i;
	int len;
	int *arry;

	i = 0;
	len = 0;
	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	arry = malloc(sizeof(int) * len);
	if (!arry)
		return (NULL);
	while (i < len)
	{
		if (start < end)
		{
			arry[i] = start;
			end--;
			i++;
		}
		else
		{
			arry[i] = start;
			end++;
			i++;
		}
	}
	return (arry);
}

/*#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	int *ptr = ft_range(2,-1);
	int len = 2 - (-1) + 1;
	while(i < len)
	{
		printf("%d", ptr[i]);
		i++;
	}

	return (0);
}*/

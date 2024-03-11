#include <unistd.h>
#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char **split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **words = malloc(sizeof(char*) * 1000);

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (i > j)
		{
			words[k] = malloc(sizeof(char) * 1000);
			ft_strncpy(words[k], &str[j], i - j);
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}

int main(int argc, char **argv)
{
	if (argc > 1 && argv[1] && argv[1][0])
	{
		int i = 1;
		int j;
		char **str = split(argv[1]);

		while (str[i])
		{
			j = 0;
			while(str[i][j])
			{
				write(1, &str[i][j], 1);
				j++;
			}
			i++;
			write(1, " ", 1);
		}
		j = 0;
		while (str[0][j])
		{
			write(1, &str[0][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:58:28 by cgaratej          #+#    #+#             */
/*   Updated: 2024/03/07 10:28:17 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space(char c)
{
	if (c != ' ' && c != '\t' && c != '\0')
		return (1);
	return (0);
}

int	wc(char *str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i])
	{
		if ((i == 0 && spcace(str[i])) || space(str[i]) && !space(str[i - 1]))
			c++;
		i++;
	}
	return (c);
}

char **ft_split(char *str)
{
	char **words;
	int num_words;
	int i;
	int j;
	int w;
	int start;
	int end;

	num_words = wc(str);
	words = malloc((num_words + 1) * sizeof(char *));
	i = 0;
	w = 0;
	while (w < num_words)
	{
		if ((i == 0 && spcace(str[i])) || space(str[i]) && !space(str[i - 1]))
		{
			j = 0;
			start = i;
			end = start;
			while(space(str[end]))
				end++;
			words[w] = malloc(sizeof(char) * ((end - start) +1));
			while(start < end)
			{
				res[w][j] = str[start];
				start++;
				j++;
			}
			res[w][j] = '\0';
			w++;
		}
		i++;
	}
	res[words] = NULL;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:26:55 by cgaratej          #+#    #+#             */
/*   Updated: 2024/02/29 15:37:59 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ')
			i++;
		else
		{
			write(1, &str[i], 1);
			i++;
			if (str[i] == '\t' || str[i] == ' ')
				break ;
		}
	}
}


int	main(int argv, char**argc)
{
	if(argv == 2)
		first_word(argc[1]);
	write(1, "\n", 1);
	return (0);
}

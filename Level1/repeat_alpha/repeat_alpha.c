/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:05:15 by cgaratej          #+#    #+#             */
/*   Updated: 2024/03/04 17:29:27 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c, int n)
{
	while (n >= 0)
	{
		write(1, &c, 1);
		n--;
	}
}

void	repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar(str[i], str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar(str[i], str[i] - 'A');
		else
			write(1, &str[i], 1);
		i++;
	}
}


int	main(int argc, char** argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}

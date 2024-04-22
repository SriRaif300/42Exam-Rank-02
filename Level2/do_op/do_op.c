/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgaratej <cgaratej@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:26:07 by cgaratej          #+#    #+#             */
/*   Updated: 2024/04/22 11:09:28 by cgaratej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	result;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		result = 0;
		if (argv[2][0] == '+')
			result = a + b;
		else if (argv[2][0] == '-')
			result = a - b;
		else if (argv[2][0] == '*')
			result = a * b;
		else if (argv[2][0] == '/')
			result = a / b;
		else if (argv[2][0] == '%')
			result = a % b;
		printf("%d", result);
	}
	printf("\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:49:42 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 12:33:57 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Turns a string containing number into an integer

#include "libft.h"
#include <limits.h>

int	handle_return(long sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		index;
	long	sum;
	long	sign;

	index = 0;
	while ((((str[index] >= 9 && str[index] <= 13) || str[index] == 32)))
		index++;
	sign = 1;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	sum = 0;
	while (str[index] >= 48 && str[index] <= 57)
	{
		if (sum >= LONG_MAX / 10 || (sum == LONG_MAX && str[index] - '0' > 7))
			handle_return(sign);
		sum = (sum * 10) + (str[index] - '0');
		index++;
	}
	return (sum * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int			i;
// 	const char	nbr[21][50] = {
// 		"1994", "  1994 ", " 19 94 ", "-1994 ",
// 		" +-1994 ", "1994b", "b1994", "19b94",
// 		"", " ", " hidhej ", " --23",
// 		"2147483647", "-2147483648",
// 		"2147483650", "-2147483650",
// 		"+9223372036854775807", "-9223372036854775808",
// 		"+9223372036854775810", "-9223372036854775810",
// 		"  000000000000000000009485"
// 	};

// 	i = 0;
// 	while (i < 21)
// 		printf("[%d] %d\n", i, ft_atoi(nbr[i]));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:49:42 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/19 13:29:19 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Turns a string containing number into an integer

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int i;
	long sum;
	long sign;

	sign = 1;
	sum = 0;
	i = 0;
	while ((((str[i] >= 9 && str[i] <= 13) || str[i] == 32)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (sum >= LONG_MAX / 10 || (sum == LONG_MAX && str[i] - '0' > 7))
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	const char nbr[21][50] = {
// 		"1994", "  1994 ", " 19 94 ", "-1994 ", " +-1994 ", "1994b", "b1994", "19b94",
// 		"", " ", " hidhej ", " --23",
// 		"2147483647", "-2147483648", "2147483650", "-2147483650", /* INT_MAX, INT_MIN*/
// 		"+9223372036854775807", "-9223372036854775808", "+9223372036854775810", "-9223372036854775810",  /* LONG_MAX, LONG_MIN */
// 		"  000000000000000000009485"
// 		};
// 	for (int i = 0; i < 21; i++)
// 		printf("[%d] %d\n", i, ft_atoi(nbr[i]));
// 	return (0);
// }




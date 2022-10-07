/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:49:42 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/07 15:33:58 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;
	int	count;

	sign = 1;
	res = 0;
	count = 0;
	i = 0;
	while(str[i])
	{
		// handle spaces
		while ((((str[i] >= 9 && str[i] <= 13) || str[i] == 32)))
			i++;
		// Handle signs
		if (str[i] == '-' || str[i] == '+')
		{
			if (count == 0)
			{
				if (str[i] == '-')
					sign *= -1;
				count++;
				i++;
			}
			else
				return (0);
		}
		// Handle numbers
		while (str[i] >= 48 && str[i] <= 57)
		{
			res = (res * 10) + (str[i] - '0');
			i++;
		}
		i++;
	}
	// Return final number
	return (sign * res);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	// Exemple string
	char *str = "  +42Lyon";
	// Original function
	printf("Original : %d\n", atoi(str));
	// My function
	printf("New      : %d\n", ft_atoi(str));
	// Return status
	return (0);
}
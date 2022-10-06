/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:49:42 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/05 15:30:41 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ignore spaces
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
		if ((((str[i] >= 9 && str[i] <= 13) || str[i] == 32)))
		{
			if (count == 0)
				i++;
			else
				return (0);
		}
		// Handle signs
		else if ((str[i] == '-') || (str[i] == '+'))
		{
			if (count == 0)
			{
				if (str[i] == '-')
					sign *= -1;
				count++;
			}
			else
				return (0);
			i++;
		}
		// Handle numbers
		else if (str[i] >= 48 && str[i] <= 57)
		{
			res = res*10 + str[i] - '0';
			i++;
		}
		else
			return (0);
	}
	// Return final number
	return (sign * res);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	// Exemple string
// 	char *str = "  --154";
// 	// Original function
// 	printf("Original : %d\n", atoi(str));
// 	// My function
// 	printf("New      : %d\n", ft_atoi(str));
// 	// Return status
// 	return (0);
// }
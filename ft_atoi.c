/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:49:42 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/14 17:09:48 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int i;
	long long res;
	long long sign;

	sign = 1;
	res = 0;
	i = 0;
	// handle spaces
	while ((((str[i] >= 9 && str[i] <= 13) || str[i] == 32)))
		i++;
	// Handle signs
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	// Handle numbers
	while (str[i] >= 48 && str[i] <= 57)
	{
		// handling overflow test case
        if (res > INT_MAX / 10 || (res == INT_MAX / 10 && str[i] - '0' > 7))
        {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	//return (0);
	return (sign * res);
}

// Limite long long returns -1
// Tester avec limites d'un int && unsigned long long
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	printf("%d\n", ft_atoi(" 214748369099999444  "));
// 	printf("%d\n", atoi("  214748369099999444  "));
// }
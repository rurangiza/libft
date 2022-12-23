/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:49:42 by arurangi          #+#    #+#             */
/*   Updated: 2022/12/21 14:16:19 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Converts a string {str} into an integer
 * 
 * Returns : the integer
*/

#include "libft.h"

static int	handle_long_return(long sign);

int	ft_atoi(const char *str)
{
	int		index;
	long	sum;
	long	sign;

	index = 0;
	while (ft_isspace(str[index]))
		index++;
	sign = 1;
	if (ft_issign(str[index]))
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	sum = 0;
	while (ft_isdigit(str[index]))
	{
		if (sum >= LONG_MAX / 10 || (sum == LONG_MAX && str[index] - '0' > 7))
			handle_long_return(sign);
		sum = (sum * 10) + (str[index] - '0');
		index++;
	}
	return (sum * sign);
}

static int	handle_long_return(long sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:05:32 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 11:41:00 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// n: converts integers to ASCII

/* Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled. */

// The string representing the integer. NULL if the allocation fails.

#include "libft.h"

static int	find_size(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}	
	return (count);
}

char	*ft_itoa(int nbr)
{
	unsigned int	nbr_len;
	char			*str;
	unsigned int	u_nbr;

	nbr_len = find_size(nbr);
	str = malloc(sizeof(char) * (nbr_len + 1));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		u_nbr = -nbr;
	}
	else
		u_nbr = nbr;
	if (nbr == 0)
		str[0] = '0';
	str[nbr_len] = '\0';
	while (u_nbr != 0)
	{
		str[nbr_len - 1] = (u_nbr % 10) + '0';
		u_nbr = u_nbr / 10;
		nbr_len--;
	}
	return (str);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
// 	char *str = ft_itoa(456565);
// 	printf("%s\n", str);
// 	return (0);
// }

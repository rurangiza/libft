/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:05:32 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/11 14:22:47 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// n: the integer to convert.

/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/

// The string representing the integer. NULL if the allocation fails.

#include "libft.h"
#include <stdio.h>

int	find_size(int n)
{
	int	count;

	count = 0;
	while (n > 10)
	{
		count++;
		n = n / 10;
	}	
	return (count);
}

char *ft_itoa(int n)
{
	int len = find_size(n) + 1;
	char *buffer;

	buffer = malloc(sizeof(char) * (len));
	while (n != 0)
	{
		buffer[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (buffer);
}

int main(void)
{
	printf("%s\n", ft_itoa(589634));
	return (0);
}
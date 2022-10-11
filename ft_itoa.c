/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:05:32 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/11 13:13:36 by arurangi         ###   ########.fr       */
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
	int	len;
	int	pos;
	len = find_size(n) + 1;
	
	char buffer[len];
	pos = 0; // 2
	if (n > 9) // 549
	{
		pos++;
		ft_itoa(n / 10);
	}
	else if (n < 10 && n >= 0)
	{
		buffer[pos++] = n + '0';
	}
	buffer[pos] = '\0';
	printf("%s\n", buffer);
	if (buffer[0] != '\0')
		return (buffer);
	else
		return (NULL);
}

#include <stdlib.h>
int main(void)
{
	char *str = ft_itoa(5389);
	printf("%s\n", str);
	//ft_itoa(34);
	return (0);
}
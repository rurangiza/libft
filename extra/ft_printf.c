/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:29:07 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/24 12:05:46 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

void	ft_putfs(char fs, va_list args, int *counter)
{
	// c, d, i, x, X, 
	if (fs == 'd')
		*counter = ft_putnbr(va_arg(args, int), ch, );
	if (fs == 'x')
		*counter = ft_putnbr_base();
}

int	ft_printf(char *str, ...)
{
	va_list	args;	
	int		counter;
	int		index;
	
	// Iterate throught the string
	va_start(args, str);
	counter = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] == "%")
		{
			ft_putfs(str[index + 1], args, &counter);
			index++;
		}
		else
		{
			write(1, &str[index], 1);
			counter++;
		}
		index++;
	}
	va_end(args);
	return (counter);
}
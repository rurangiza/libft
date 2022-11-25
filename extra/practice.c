/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:09:39 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/24 13:39:39 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char ch)
{
	write(1, &ch, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}

int	ft_putnbr(int nbr, int *counter)
{
	char ch;

	if (nbr > 9)
	{
		ft_putnbr((nbr / 10), counter);
		ft_putnbr((nbr % 10), counter);
	}
	else if (nbr == INT_MIN)
		return (ft_putstr("-2147483648") + *counter);
	else if (nbr < 0)
	{
		(*counter)++;
		write(1, "-", 1);
		nbr = -nbr;
		ft_putnbr(nbr, counter);
	}
	else if (nbr <= 9 && nbr >= 0)
	{
		(*counter)++;
		ch = nbr + '0';
		write(1, &ch, 1);
	}
	return (*counter);
}

int	puthex(unsigned long nbr, char format, int *counter)
{
	char	*base;
	char	ch;

	base = "0123456789abcdef";
	if (nbr > 15)
	{
		puthex((nbr / 16), format, counter);
		puthex((nbr % 16), format, counter);
	}
	else
	{
		(* counter)++;
		ch = base[nbr];
		if (format == 'X' && isalpha(base[nbr]))
			ch -= 32;
		write(1, &ch, 1);
	}
}

void	ft_putfs(char ch, va_list args, int *counter)
{
	if (ch == 'c')
		*counter += ft_putchar(va_arg(args, int));
	if (ch == 's')
		*counter += ft_putstr(va_arg(args, char *));
	if (ch == 'd' || ch == 'i')
		*counter = ft_putnbr(va_arg(args, int), counter);
}

int	ft_printf(char *str, ...)
{
	va_list	args;
	int		counter;
	int		index;
	
	va_start(args, str);
	counter = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] == '%')
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

int	main(void)
{
	char ch = 'B';
	char *str = "Arsene";
	
	printf("\nNumber: %d\n", ft_printf("Hello, %c %s", ch, str));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:44:31 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/24 11:49:20 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// putnbr
int	ft_putnbr(int nbr)
{
	unsigned int	unbr;
	
	
	if (nbr < 0)
	{
		write(1, "-", 1);
		unbr = nbr * -1;
	}
	if (nbr > 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	if (nbr < 10)
	{
		write(1, &nbr, 1);
	}
}
// putstr
// putnbr_base
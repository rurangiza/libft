/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:51:41 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/21 13:01:41 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Applies function {f} on each character of the string passed as argument
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index;

	if (!f)
		return ;
	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}

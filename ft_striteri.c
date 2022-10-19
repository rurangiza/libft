/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:51:41 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/18 16:44:27 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s: The string on which to iterate
// f: The function to apply to each character

/*
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	
	if (!f)
		return ;

	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
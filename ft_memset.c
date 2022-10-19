/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arsene <Arsene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:19:37 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/19 21:09:37 by Arsene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * copies the character {ch} (an unsigned char) 
 * to the first {nbr} characters of the string pointed to, by the argument {str}
*/

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t nbr)
{
	int	i;

	i = 0;
	while (i < nbr)
	{
		((unsigned char *)str)[i] = (unsigned char)ch;
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:54:48 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/12 11:22:44 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memmove() function copies len bytes from string src to string dst. 
The two strings may overlap; the copy is always done in a non-destructive manner.
*/

// The memmove() function returns the original value of dst.

/*
======ORIGINAL STRING==========
+++++++++++++++++++++++++++++++
| 'a' | 'b' | 'c' | 'd' | 'e' |
+++++++++++++++++++++++++++++++
 0x100 0x101 0x102 0x103 0x104
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nbr)
{
	size_t	i;
	i = 0;
	
	if (dest > src)
	{
		while ((nbr - 1) >= 0)
		{
			((char *)dest)[nbr] = ((char *)src)[nbr];
			nbr--;
		}
	}
	else
	{
		while (i < nbr)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

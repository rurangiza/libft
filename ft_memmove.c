/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:54:48 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 11:43:17 by arurangi         ###   ########.fr       */
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
	if (!dest && !src)
		return (NULL);
	if (dest - src < nbr)
	{
		i = nbr - 1;
		while (i < nbr)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < nbr)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *dest = "abcdef";
// 	printf("%s\n", dest);
// 	ft_memmove(dest + 2, dest, 3);
// 	printf("%s\n", dest);
// 	return (0);
// }

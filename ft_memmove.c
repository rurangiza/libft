/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:54:48 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/21 11:00:36 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Copies len bytes from string {src} to string {dst}. 
 * Unlike memcpy, memmove take care of overlap...
 * 
 * Returns a pointer to the destination {dest}
*/

// The memmove() function returns the original value of dst.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest >= src)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}

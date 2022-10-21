/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:58:23 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/21 11:35:55 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Allocate a specified amount of memory
 * and initialize it to zero. 
 *
 * Returns : a void pointer to this memory location,
 * which can then be cast to the desired type.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count > 65535 || size > 65535)
		return (NULL);
	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:58:23 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 10:54:13 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The calloc() function in C is used to allocate a specified amount of memory
and then initialize it to zero. The function returns a void pointer to this
memory location, which can then be cast to the desired type. The function
takes in two parameters that collectively specify the amount of memory
​to be allocated.
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:54:48 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/06 14:02:41 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nbr)
{
	size_t	i;

	i = 0;
	while (i < nbr)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

// Testing
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str[] = "Start stop";
// 	char str2[] = "hope";

// 	printf("%s\n", str);

// 	memmove(str, str2, 4);

// 	printf("%s\n", str);

// 	return (0);
// }

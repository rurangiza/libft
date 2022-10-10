/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:54:48 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/07 17:01:21 by arurangi         ###   ########.fr       */
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


// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	// char str[] = "Start stop";
// 	// char str2[] = "hope";
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};

// 	printf("%s\n\n", sResult);

// 	memmove(sResult + 1, sResult, 2);
// 	printf("%s\n", sResult);

// 	ft_memmove(sResult + 1, sResult, 2);
// 	printf("%s\n", sResult);

// 	return (0);
// }

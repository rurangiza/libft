/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:01:06 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/05 11:01:06 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	src_len = (size_t)ft_strlen(src);
	if (dstsize)
	{
		i = 0; // 5
		j = 0;
		while (dest[i++]);
		while ((j < (dstsize - 1)) && dstsize < src_len)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (ft_strlen(dest) + j);
	}
	return (src_len);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[4] = "wor";
	printf("Original    : %zu\n", strlcat(dest, "abcdefgh", 5));
	printf("My function : %zu\n", ft_strlcat(dest, "", 5));
	return (0);
}

// S'arreter quand size > longueur de src
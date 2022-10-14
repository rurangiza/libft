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
	size_t	src_index;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dest)
		dest_len = ft_strlen(dest);
	src_index = 0;
	if (dstsize)
	{
		while (src[src_index] && ((dest_len + src_index) < (dstsize - 1)))
		{
			dest[dest_len + src_index] = src[src_index];
			src_index++;
		}
		dest[dest_len + src_index] = '\0';
	}
	if (dstsize > dest_len)
		return (dest_len + src_len);
	else
		return(dstsize + src_len);
}


// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	//char dest[] = 0;
// 	char src[] = "nyan !";
// 	printf("%zu\n", strlcat((void *)0, src, 0));
// 	//printf("%zu\n", ft_strlcat((void *)0, src, 0));
// }

// In tripouille, the last test crashes. works if protect strlen, but even original is not protected, so we fine
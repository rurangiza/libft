/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:51:07 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/14 17:01:08 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * Locates the first occurence of the string needle
 * in the string haystack
 * while searching not more than len characters
*/

/* Iterate thorugh the haystack */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_index;
	size_t	n_index;
	size_t	needle_len;
	size_t	i = 0;

	if (!haystack && !len)
		return (NULL);
	if (needle[i])
	{
		needle_len = ft_strlen(needle);
		h_index = 0;
		while (((char *)haystack)[h_index] && (h_index < len))
		{
			n_index = 0;
			while (haystack[h_index + n_index] == needle[n_index] && ((h_index + n_index) < len))
			{
				if (needle[n_index + 1] == '\0')
					return ((char *)haystack + h_index);
				n_index++;
			}
			h_index++;
		}
		return (0);
	}
	else
		return ((char *)haystack);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char haystack[30] = "aaabcabcd";
// 	const char *needle = "abcd";
// 	size_t len = 9;
// 	printf("Returns : %s\n", strnstr(haystack, needle, len));
// 	printf("Returns : %s\n", ft_strnstr(haystack, needle, len));
// 	return (0);
// }
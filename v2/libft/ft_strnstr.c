/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:51:07 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/07 14:44:11 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Locates the first occurence of the string needle
// in the string haystack
// while searching not more than len characters

// Iterate thorugh the haystack
	// Each step, 
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_index;
	size_t	n_index;
	size_t	needle_len;
	size_t	i = 0;

	needle_len = ft_strlen(needle);
	// Error handling
	if (!haystack)
		return (0);
	if (needle[i])
	{
		h_index = 0;
		while (((char *)haystack)[h_index] && (h_index < len))
		{
			n_index = 0;
			while (((char *)haystack)[h_index + n_index] == needle[n_index] && ((h_index + n_index) < len))
			{
				n_index++;
			}
			if (n_index == needle_len)
				return (((char *)haystack) + h_index);
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
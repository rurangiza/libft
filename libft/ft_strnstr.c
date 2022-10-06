/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:51:07 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/05 16:43:45 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	needle_len = ft_strlen(needle);

	if (!len)
		return (0);
	if (needle)
	{
		i = 0;
		while (((char *)haystack)[i] && (i < len))
		{
			j = 0;
			while (((char *)haystack)[i + j] == needle[j] && ((i + j) < len))
			{
				j++;
			}
			if (j > 0)
			{
				// pointer 1st character occurence of needle is returned
				if (j == needle_len)
					return (&((char *)haystack)[i]);
				else
					return (0);
			}
			i++;
		}
		// non needle in haystack => NULL is returned
		return (0);
	}
	else
	{
		// needle is empty string => hastack is returned
		return ((char *)haystack);
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char *haystack = "The day has come to move forward";
// 	const char *needle = "he";
// 	size_t len = 2;
// 	printf("Returns : %s\n", ft_strnstr(haystack, needle, len));
// 	printf("Returns : %s\n", strnstr(haystack, needle, len));
// 	return (0);
// }
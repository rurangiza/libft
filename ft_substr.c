/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:08:24 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/19 16:56:11 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns a substring from the string ’s’.
The substring begins at index ’start' and is of maximum size ’len’.
*/

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	int		s_len;
	int	i;
	if ( start > ft_strlen(s))
		return (ft_strdup(""));
	// Find true maximum length
	i = 0;
	while (i < len && s[start + i])
		i++;
	len = i;
	s_len = ft_strlen(s);

	sub_str = malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	if (start >= s_len)
	{
		sub_str[0] = '\0';
		return (sub_str);
	}
	i = 0;
	while (i < len && ((char *)s)[start + i])
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", ft_substr("hola", 4294967295, 18446744073709551615));
// 	return (0);
// }

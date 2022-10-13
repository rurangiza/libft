/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:44:31 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/13 17:34:33 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strdup() and strndup() functions are used to duplicate a string.
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		s_len;
	char	*str_copy;
	int		s_index;
	// Error handling
	if (!str)
		return (NULL);
	// Allocate memory based on size of str
	s_len = ft_strlen(str);
	str_copy = (char *) malloc(sizeof(char) * (s_len + 1));
	if (!str_copy)
		return (NULL);
	// Copy str into "copy"
	s_index = 0;
	while (str[s_index])
	{
		str_copy[s_index] = str[s_index];
		s_index++;
	}
	str_copy[s_index] = '\0';
	return (str_copy);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char *s1 = "Houraaaa!";
// 	printf("Original : %s\n", s1);
// 	printf("Copy : %s\n", ft_strdup(s1));
// 	return (0);
// }
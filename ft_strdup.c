/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arsene <Arsene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:44:31 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/21 08:43:50 by Arsene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Duplicate a string.
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		s_len;
	char	*str_copy;
	int		s_index;

	s_len = ft_strlen(str);
	str_copy = (char *) malloc(sizeof(char) * (s_len + 1));
	if (!str_copy)
		return (NULL);
	s_index = 0;
	while (str[s_index])
	{
		str_copy[s_index] = str[s_index];
		s_index++;
	}
	str_copy[s_index] = '\0';
	return (str_copy);
}

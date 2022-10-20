/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:10:48 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 15:39:25 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Removes specific characters from beginning and end of string
 * Returns: the trimmed string
*/

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int		start;
	int		end;
	char	*trimmed_str;
	int		length;

	if (!str || !set)
		return (0);
	start = 0;
	while (ft_strchr(set, str[start]) != NULL && str[start] != '\0')
		start++;
	end = ft_strlen(str);
	if (start == end)
	{
		trimmed_str = ft_strdup("");
		if (!trimmed_str)
			return (NULL);
		return (trimmed_str);
	}
	while (ft_strchr(set, str[end]) != NULL)
		end--;
	length = ((end - start) + 1);
	trimmed_str = ft_substr(str, start, length);
	return (trimmed_str);
}

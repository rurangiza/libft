/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:08:24 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/11 09:12:36 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int	i;

	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ptr[0] = '\0';
		return (ptr);
	}
	i = 0;
	while (i < len && ((char *)s)[start + i])
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:59:19 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/18 16:44:39 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s: The string on which to iterate
// f: The function to apply to each character

/*
Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		s_length;
	char	*ptr;
	int		s_index;
	// Handle empty string !!!!!!!!!!!!!!!!!!!!!!!!
	if (!s || !f)
		return (NULL);
	// Allocate memory for ptr
	s_length = ft_strlen(s);
	ptr = malloc(sizeof(char) * (s_length + 1));
	// Protect malloc
	if (!ptr)
		return (NULL);
	// Copy modified string to ptr
	s_index = 0;
	while (s[s_index])
	{
		ptr[s_index] = f(s_index, s[s_index]);
		s_index++;
	}
	ptr[s_index] = '\0';
	return (ptr);
}

// handle empty string
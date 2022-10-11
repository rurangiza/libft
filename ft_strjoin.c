/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:10:02 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/11 09:14:49 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	// Declaration
	int length; // Total length
	char *ptr; // New string
	int i; // index of s1
	int j; // index of s2
	// Total length
	length =  ft_strlen(s1) + ft_strlen(s2);
	// Allocate memory + error handling
	ptr = malloc(sizeof(char) * (length + 1));
	if (!ptr)
		return (0);
	// Join strings
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	// Return new string
	return (ptr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:49:14 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 14:50:19 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * Breaks up a string {str}
 * into an array of substrings
 * based on a seperator character
 */

#include "libft.h"

static int	count_words(char *str, char c);
static char	*alloc_memword(char *str, char c);
static char	**free_memword(char **tab);

char	**ft_split(char const *str, char ch)
{
	char	**array;
	int		a_index;
	int		i;

	if (!str)
		return (0);
	array = malloc((count_words((char *)str, ch) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	a_index = 0;
	while (str[i])
	{
		while (str[i] == ch && str[i])
			i++;
		if (str[i] != ch && str[i])
		{
			array[a_index] = alloc_memword((char *)str + i, ch);
			if (!array[a_index])
				return (free_memword(array));
			a_index++;
		}
		while (str[i] != ch && str[i])
			i++;
	}
	array[a_index] = 0;
	return (array);
}

static int	count_words(char *str, char ch)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ch && str[i] != '\0')
			i++;
		if (str[i] != ch && str[i] != '\0')
			counter++;
		while (str[i] != ch && str[i] != '\0')
			i++;
	}
	return (counter);
}

static char	*alloc_memword(char *str, char ch)
{
	int		index;
	int		length;
	char	*word;

	length = 0;
	while (str[length] != ch && str[length] != '\0')
		length++;
	word = malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	index = 0;
	while (index < length)
	{
		word[index] = str[index];
		index++;
	}
	word[index] = '\0';
	return (word);
}

static char	**free_memword(char **array)
{
	int	index;

	index = 0;
	while (array[index])
		free(array[index++]);
	free(array);
	return (0);
}

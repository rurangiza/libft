/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:49:14 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/12 17:48:00 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Fonction 
qui découpe une chaîne de caractères 
en fonction d’une autre chaîne de caractères.
*/

#include <stdlib.h>
#include <stdio.h>

static int	count_words(char *str, char c)
{
	int	count;
	int	tmp;
	int	i;
	
	count = 0;
	tmp = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			tmp = 0;
		else if (tmp == 0)
		{
			tmp = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static int	set_wrd_mem(char *str,char ch, char **list)
{
	// Local variables
	int	wrd_len;
	int ls_index;
	int	s_index;
	
	ls_index = 0;
	wrd_len = 0;
	
	// Allocate memory for each word
	s_index = 0;
	while (str[s_index])
	{
		if (str[s_index] == ch)
		{
			if (wrd_len > 0)
			{
				list[ls_index] = malloc(sizeof(char) * (wrd_len + 1));
				if (!list[ls_index])
					return (0);
				ls_index++;
				wrd_len = 0;
			}
		}
		else
			wrd_len++;
		s_index++;
	}
	list[ls_index] = malloc(sizeof(char) * (wrd_len + 1));
	//list[ls_index + 1] = malloc(sizeof(char) * 1);
	if (!list[ls_index])
		return (0);
	return (1);
}

char	**ft_split(char *str, char ch)
{
	char **list;
	int	words;
	// Find number of words => allocate space to list
	words = count_words(str, ch);
	list = malloc(sizeof(char *) * (words + 1));
	if (!list)
		return (NULL);
	// Find length of each word => allocate space
	set_wrd_mem(str, ch, list);
	// Copy strings
	int s_index = 0;
	int ls_index = 0;
	int wrd_index = 0;
	while (str[s_index])
	{
		if (str[s_index] != ch)
		{
			list[ls_index][wrd_index] = str[s_index];
			wrd_index++;
		}
		else if (wrd_index > 0)
		{
			list[ls_index][wrd_index] = '\0';
			wrd_index = 0;
			ls_index++;
		}
		s_index++;
	}
	//list[ls_index][wrd_index] = '\0';
	//list[ls_index + 1] = NULL;
	list[words] = NULL;
	// Return value
	return (list);
}

// int main(void)
// {
// 	/* Test 01 */ //char *str = "Bob Eric David Lemoine";
// 	/* Test 06 */ char *str6 = "  tripouille  42  ";
// 	char **list = ft_split(str6, ' ');
	
// 	int i = 0;
// 	while (list[i])
// 	{
// 		printf("%s\n", list[i]);
// 		free(list[i]);
// 		i++;
// 	}
// 	//free(list);
// 	return (0);
// }
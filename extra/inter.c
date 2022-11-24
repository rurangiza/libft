/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:38:11 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/24 09:28:04 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *  inter()
 *  
 *	Write a program
 *	that takes two strings
 *	and displays, without doubles, the characters they have in common
 *	in the order they appear in the first one
 *
*/

#include "../libft.h"

int	first_encounter(char ch, char *s1, int length);

int main(int ac, char **av)
{
	char	*s1;
	char	*s2;
	int		i; // Iterate thorugh s1
	int		j; // Iterate through s2

	// Check for valid number of arguments
	if (ac != 3)
	{
		write(1, "Usage: ./program <s1> <s2>", 26);
		return (1);
	}
	s1 = av[1];
	s2 = av[2];

	// Print every character that I have not seen before
	i = 0;
	while (s1[i])
	{
		if (first_encounter(s1[i], s1, i))
		{
			j = 0;
			while (s2[j])
			{
				if (s1[i] == s2[j])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (0);
}

// Check if a given character has already been seen
int	first_encounter(char ch, char *s1, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (s1[i] == ch)
			return (0);
		i++;
	}
	return (1);
}



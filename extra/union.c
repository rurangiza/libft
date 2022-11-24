/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:32:22 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/24 09:24:01 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 * union()
 *
 * Write a function
 * that takes two strings
 * and displays, the combined unique characters of both strings
 *
 * 
*/

#include <unistd.h>

int	first_encounter(char ch, char *str, int n);

int	main(int ac, char **av)
{
	char	*s1;
	char	*s2;
	int		i;
	int		j;

	// Check for valid number of arguments
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	s1 = av[1];
	s2 = av[2];

	// Print every unique characters of {s1}
	i = 0;
	while (s1[i])
	{
		if (first_encounter(s1[i], s1, i))
			write(1, &s1[i], 1);
		i++;
	}

	// Print every unique characters of {s2}, comprared to {s1} and itself
	j = 0;
	while(s2[j])
	{
		if (first_encounter(s2[j], s1, i) && first_encounter(s2[j], s2, j))
			write(1, &s2[j], 1);
		j++;
	}

	return (0);
}

// Check if a given character has already been seen
int	first_encounter(char ch, char *str, int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return (0);
		i++;
	}
	return (1);
}
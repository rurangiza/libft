/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:32:22 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/23 15:43:13 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 * union()
 *
 * Write a function
 * that takes two strings
 * and displays, without doubles, the characters that appear
 * in either one of the strings
 * 
*/

int	main(int ac, char **av)
{
	char	*s1;
	char	*s2;
	int		i;
	// Take two arguments
	if (ac != 3)
	{
		write(1, "Usage: ./a.out <s1> <s2>\n", 24);
		return (1);
	}
	s1 = av[1];
	s2 = av[2];
	i = 0;
	// 
	while (s1[i])
	{
		
		i++;
	}
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:41:53 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/19 14:46:42 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_toupper(int c)
{
	unsigned char ch;
	
	ch = c;
	if (ch >= 97 && ch <= 122)
		ch -= 32;
	return (ch);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char ch = 'e';
// 	for (int i = -10; i < 0; i++)
// 		printf("%c", toupper(i));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:47:03 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/05 15:06:00 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char ch;
	
	ch = c; 
	if (ch >= 65 && ch <= 90)
		ch += 32;
	return (ch);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char ch = 'P';
// 	printf("%c\n", ft_tolower(ch));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:41:53 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/05 15:05:50 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// 	char ch = 'q';
// 	printf("%c\n", ft_toupper(ch));
// 	return (0);
// }
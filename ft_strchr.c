/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:40:47 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 15:34:11 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *  Returns : A pointer to the first occurrence of character in str.
 *            If the character is not found,
 * 			  the function returns a null pointer.
*/

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;

	ch = c;
	i = 0;
	if (ch == '\0')
	{
		while (s[i])
			i++;
		return ((char *)s + i);
	}
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:44:31 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/07 17:03:11 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	char	*copy;
	int		i;

	s1_len = ft_strlen(s1);
	copy = (char *) malloc(sizeof(char) * (s1_len + 1));
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	return (copy);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char *s1 = "Houraaaa!";
// 	printf("Original : %s\n", s1);
// 	printf("Copy : %s\n", ft_strdup(s1));
// 	return (0);
// }
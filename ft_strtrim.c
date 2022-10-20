/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:10:48 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 11:52:22 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_start;
	int		i_end;
	int		i_ptr;
	char	*ptr;
	int		len;

	if (!s1 || !set)
		return (0);
	i_start = 0;
	i_end = ft_strlen(s1);
	while (ft_strchr(set, s1[i_start]) != NULL && s1[i_start] != '\0')
		i_start++;
	if (i_start == i_end)
	{
		ptr = ft_strdup("");
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	while (ft_strchr(set, s1[i_end]) != NULL)
		i_end--;
	len = ((i_end - i_start) + 1);
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	i_ptr = 0;
	while (i_start <= i_end)
		ptr[i_ptr++] = s1[i_start++];
	ptr[i_ptr] = '\0';
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *str = "   xxx   xxx";
// 	char *set = " x";
// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }
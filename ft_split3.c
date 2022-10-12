/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:56:03 by Arsene            #+#    #+#             */
/*   Updated: 2022/10/12 12:02:05 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include "libft.h"

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

static int count_words(char const *str, char c)
{
    int i;
    int count;
    int s_len;

    s_len = ft_strlen((char *)str);
    // Trouver le nombre de mots
    count = 0;
    i = 0;
    while (str[i])
    {
        while (str[i] == c && count == 0)
			i++;
		if (str[i] == c && (count == 0) && i < s_len)
			count++;
		if ((str[i] == c) && (str[i + 1] != '\0')
			&& (str[i + 1] == c))
			count++;
		i++;
    }
    return (count);
}

//// FUNCTION ////
void ft_split(char const *s, char c)
{
    int size;
    size = count_words(s, c);
}

/// MAIN ////
#include <stdio.h>
int main(void)
{
    char *str = "Bob Eric Francine Josh";
    //ft_split(str, ' ');
    printf("%d\n", count_words(str, ' '));
    return (0);
}

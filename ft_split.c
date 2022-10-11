/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arsene <Arsene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:56:03 by Arsene            #+#    #+#             */
/*   Updated: 2022/10/11 00:48:15 by Arsene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int find_size()
// {
// }

void ft_split(char const *s, char c)
{
    int i;
    int word_count;
    word_count = 0;
    i = 1;
    // Trouver le nombre de mots

    while (s[i])
    {
        if (s[i] == c && s[i - 1] != c)
        {
            if (s[i + 1] == c)
                i++;
            else if (s[i + 1] == c && s[i + 2] == '\0')
                word_count++;
            else
                word_count++;
        }
        i++;
    }
    printf("%d\n", word_count);
}

int main(void)
{
    char *str = " a";
    ft_split(str, ' ');
    return (0);
}
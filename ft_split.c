/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:49:14 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/19 17:10:52 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Fonction 
qui découpe une chaîne de caractères 
en fonction d’une autre chaîne de caractères.
*/

#include "libft.h"

static int    wordcount(char *str, char c)
{
    int    i;
    int    count;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && str[i] == c)
            i++;
        if (str[i] != '\0')
            count++;
        while (str[i] != '\0' && str[i] != c)
            i++;
    }
    return (count);
}

static char    *ft_word(char *str, char c)
{
    int     i;
    int     j;
    char    *tab;

    i = 0;
    j = 0;
    while (str[j] != '\0' && str[j] != c)
        j++;
    tab = malloc(sizeof(char) * (j + 1));
    if (!tab)
        return (NULL);
    while (i < j)
    {
        tab[i] = str[i];
        i++;
    }
    tab[i] = '\0';
    return (tab);
}

// static char **free_that_shit(char **tab)
// {
//     int i;
    
//     i = 0;
//     while (i++ < (sizeof(tab) / sizeof(tab[0])))
//     {
//         if (!tab[i])
//             break;
//     }
//     if (i >= (sizeof(tab) / sizeof(tab[0])) - 1)
//         return (tab);
//     else
//     {
//         i = 0;
//         while (i < (sizeof(tab) / sizeof(tab[0])))
//             free(tab[i++]);
//         free(tab);
//         tab = NULL;
//     }
//     return (tab);
// }

static char **free_that_shit2(char **tab)
{
    int index;
    
    index = 0;
    while (tab[index])
        free(tab[index++]);
    free(tab);
    return (0);
}

char    **ft_split(char const *s, char c)
{
    char    **arr;
    int        i;
    int        j;

    i = 0;
    j = 0;
    if (!s)
        return (0);
    arr = malloc((wordcount((char *)s, c) + 1) * sizeof(char *));
    if (!arr)
        return (NULL);
    while (s[i] != '\0')
    {
        while (s[i] != '\0' && s[i] == c)
            i++;
        if (s[i] != '\0')
        {
            arr[j] = ft_word((char *)s + i, c);
            if (!arr[j])
                return (free_that_shit2(arr));
            j++;
        }
        while (s[i] != '\0' && s[i] != c)
            i++;
    }
    arr[j] = 0;
    return (arr);
}

// MAIN
// int main(void)
// {
// 	/* Test 01 */ //char *str = " Bob Eric David Lemoine ";
// 	/* Test 06 */ char *str6 = "	";
// 	char **list = ft_split(str6, ' ');
// 	int i = 0;
// 	while (list[i])
// 		printf("%s\n", list[i++]);
// 	return (0);
// }
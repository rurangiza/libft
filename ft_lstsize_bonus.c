/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:18:17 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 11:40:00 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts the number of nodes in a list

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *head, *first, *second, *third, *fourth;

// 	head = malloc(sizeof(t_list));
// 	head->next = NULL;
// 	first = malloc(sizeof(t_list));
// 	head->next = first;

// 	second = malloc(sizeof(t_list));
// 	first->next = second;
// 	third = malloc(sizeof(t_list));
// 	second->next = third;

// 	fourth = malloc(sizeof(t_list));
// 	third->next = NULL;
// 	int count = ft_lstsize(NULL);
// 	printf("%d\n", count);
// }
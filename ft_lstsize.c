/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:18:17 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/17 16:04:30 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts the number of nodes in a list

int ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		count;

	count = 0;
	current = malloc(sizeof(t_list));
	if (!current)
		return (0);
	if (lst)
	{
		current = lst;
		while (current != NULL)
		{
			count++;
			current = current->next;
		}
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
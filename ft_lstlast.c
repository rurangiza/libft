/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:55:15 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/17 17:26:18 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns the last node of the list.

#include "libft.h"

// Type definitions
// typedef t_list node;

// Prototypes
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = malloc(sizeof(t_list));
	if (!current)
		return (NULL);
	current = lst;
	while (current != NULL)
	{
		current = current->next;
	}	
	return (current);
}

// void	print(node *head)
// {
// 	node *current = malloc(sizeof(node));
// 	current = head->next;
// 	while (current->next != NULL)
// 	{
// 		printf("%s\n", current->content);
// 		current = current->next;
// 	}
// 	printf("\nLast: %s\n", current->content);
// }

//void	print(node *head);


// #include <stdio.h>
// int main(void)
// {
// 	node *head, *first, *second, *third, *fourth;
	
// 	head = malloc(sizeof(node));
// 	head->next = NULL;

// 	first = malloc(sizeof(node));
// 	head->next = first;
// 	first->content = "00 Louis";
	
// 	second = malloc(sizeof(node));
// 	first->next = second;
// 	second->content = "01 Francine";
	
// 	third = malloc(sizeof(node));
// 	second->next = third;
// 	third->content = "02 Boniface";
// 	third->next = NULL;
	
// 	// fourth = malloc(sizeof(node));
// 	// third->next = fourth;
// 	// fourth->content = "03 Bernard";
// 	// fourth->next = NULL;

// 	print(head);
// 	//printf("%s\n", ft_lstlast(head)->content);

// 	return (0);
// }




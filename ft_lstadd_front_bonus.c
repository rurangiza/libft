/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:41:34 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/20 11:39:07 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

//void	print_llist(t_list *head);

// Adds node to front
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// MAIN
// int main(void)
// {
// 	t_list *lst = malloc(sizeof(t_list));
// 	lst->next = NULL;
// 	t_list *first_node = malloc(sizeof(t_list));
// 	lst->next = first_node;
// 	first_node->content = "Hiboul";
// 	first_node->next = NULL;
// 	t_list *new = malloc(sizeof(t_list));
// 	ft_lstadd_front(&lst, new);

// 	print_llist(lst);
// 	return (0);	
// }

// void	print_llist(t_list *head)
// {
// 	t_list *current = malloc(sizeof(t_list));
// 	current = head->next;
// 	while (current != NULL)
// 	{
// 		printf("%s\n", current->content);
// 		current = current->next;
// 	}
// }
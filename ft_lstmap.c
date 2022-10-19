/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:58:51 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/19 11:51:07 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Copie chaque noeud d'une liste chainee
 * dans une nouvelle liste chainee
 * en modifiant leurs contenus via une fonction precise.
*/

#include "libft.h"

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list *head = malloc(sizeof(t_list));
// 	head = NULL;

// 	while (lst)
// 	{
// 		// Create node with modified content
// 		// Add new node to back of list
// 		ft_lstadd_back(&head, ft_lstnew(f(lst->content)));
// 		// Move to next node
// 		lst = lst->next;
// 	}
// 	return (head);
// }

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;

	if (!lst || !f || !del)
		return (0);

	new_lst = 0;

	while (lst)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (new_lst);
}
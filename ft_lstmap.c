/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:58:51 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/18 16:12:34 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Copie chaque noeud d'une liste chainee
 * dans une nouvelle liste chainee
 * en modifiant leurs contenus via une fonction precise.
*/

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;

	if (!lst || !f || !del)
		return (0);
	
	new_lst = malloc(sizeof(t_list));
	if (!new_lst)
		return (0);
	
	while (lst)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (new_lst);
}
// Current node
// Move to next node
// 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:25:34 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/18 14:58:41 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * lst: The address of a pointer to a node.
 * del: The address of the function used to delete the content of the node.
*/

/*
 * Deletes and frees the given node and every
 * successor of that node, using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	if (!lst || !del)
		return ;
	
	tmp = *lst;
	while (*lst)
	{
		*lst = (*lst)->next;
		del(tmp->content);
		free(tmp);
		tmp = *lst;
	}
	*lst = 0;
}
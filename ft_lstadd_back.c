/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:00:11 by arurangi          #+#    #+#             */
/*   Updated: 2022/10/17 16:03:04 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node ’new’ at the end of the list.

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *current;
	
	current = *lst;
	while (current != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->next = NULL;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:17:53 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/24 10:47:20 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while(str[i])
			i++;
	}
	return (i);
}

int	no_eol_found(char *buffer)
{
	int i;

	i = 0;
	if (buffer)
	{
		while (buffer[i])
		{
			if (buffer[i] == '\n')
				return (0);
			i++;
		}
	}
	return (1);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	int		i;
	int		j;
	char	*nstash;

	if (!stash)
	{
		stash = malloc(sizeof(char));
		stash[0] = 0;
	}
	if (!buffer)
		return (NULL);
	nstash = malloc(sizeof(char *) * (ft_strlen(stash) + ft_strlen(buffer)) + 1);
	if (!nstash)
	{
		free(stash);
		return (NULL);
	}
	i = -1;
	while (stash[++i])
		nstash[i] = stash[i];
	j = 0;
	while (buffer[j])
		nstash[i++] = buffer[j++];
	nstash[ft_strlen(stash) + ft_strlen(buffer)] = '\0';
	free(stash);
	return (nstash);
}

char	*free_stash(char *stash)
{
	free(stash);
	return (NULL);
}

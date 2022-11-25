/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:47:51 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/24 13:45:35 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*trim_left(char *stash)
{
	char	*trimmed;
	int		i;
	int		j;

	// Protect arguments
	if (!stash)
		return (NULL);
	// Get to the line return
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (i == ft_strlen(stash))
		return (free_stash(stash));
	else
	{
		trimmed = malloc(sizeof(char) * ((ft_strlen(stash) - i) + 1));
		if (!trimmed)
			return (free_stash(stash));
		i += 1;
		j = 0;
		while (stash[i])
			trimmed[j++] = stash[i++];
		trimmed[j] = '\0';
	}
	free(stash);
	return (trimmed);
}

char	*trim_right(char *stash)
{
	int		len;
	char	*trimmed;
	int		i;

	// Length of trimmed
	len = 0;
	if (!stash[len])
		return (NULL);
	while (stash[len] && stash[len] != '\n')
		len++;
	trimmed = malloc(sizeof(char) * (len + 2));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		trimmed[i] = '\n';
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);	
}

char	*read_and_save(int fd, char *stash)
{
	char	buffer[BUFFER_SIZE + 1];
	int		bytes_read;
	int		i;

	i = 0;
	while (i < BUFFER_SIZE)
		buffer[i++] = 0;
	bytes_read = 1;
	// Read file until end of find '\n'
	while (bytes_read > 0 && no_eol_found(buffer))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free_stash(stash));
		buffer[bytes_read] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	return (stash);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stash = NULL;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	stash = read_and_save(fd, stash);
	if (!stash)
		return (free_stash(stash));
	line = trim_right(stash);
	stash = trim_left(stash);
	if (!line)
	{
		free(line);
		return (free_stash(stash));
	}
	return (line);
}



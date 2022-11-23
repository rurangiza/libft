/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:47:51 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/23 16:49:39 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#define BUFFER_SIZE 1


char	*trim_right(char *stash)
{
	int		len;
	char	*trimmed;

	// Length of trimmed
	len = 0;
	while (stash[len++] != '\n')
	trimmed = malloc(sizeof(char) * (len + 1));

	if (!stash)
		return (NULL);
	i = 0;
	while ()
	return (trimmed);	
}

char	*read_and_save(int fd, char *stash)
{
	char	buffer[BUFFER_SIZE + 1];
	int		bytes_read;

	i = 0;
	while (i < BUFFER_SIZE)
		buffer[i++] = 0;
	bytes_read = -1;
	// Read file until end of find '\n'
	while (bytes_read > 0 && no_eol_found(buffer))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			return (free_stash(stash));
		}
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
		free(stash);
		free(line)
		return (NULL);
	}
	return (line);
}

int main(void)
{
	int		fd;
	char	*str;

	fd = open("file", O_RDONLU);
	while(1)
	{
		str = get_next_line(fd);
		if (!str)
			break ;
		printf("%s", str);
		free(str);
	}
	close(fd);
	return (0);
}

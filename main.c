/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:55:29 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/25 12:00:59 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	char	**tab;
	int		fd;
	int		i;

	fd = open("Text-files/map0", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error: invalid file descriptor\n", 30);
		return (0);
	}
	tab = ft_split_fd(fd, '\n');
	i = 0;
	while (tab[i])
	{
		printf("[%d]%s\n", i, tab[i]);
		i++;
	}
}

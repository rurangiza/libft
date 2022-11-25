/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arurangi <arurangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:23:22 by arurangi          #+#    #+#             */
/*   Updated: 2022/11/24 10:27:42 by arurangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include <fcntl.h>

int main(void)
{
	int		fd;
	char	*str;

	fd = open("file.txt", O_RDONLY);
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
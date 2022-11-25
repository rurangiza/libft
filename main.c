#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	char	**tab;
	int		fd;

	fd = open("file", O_RDONLY);
	tab = ft_split_fd(fd, '\n');

	for (int i = 0; tab[i]; i++)
		printf("[%d]%s\n", i, tab[i]);
}
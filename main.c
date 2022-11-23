#include "libft.h"
#include <stdio.h>

int main(void)
{
	char **arr = ft_split("Hello, my friend and lad", ' ');
	printf("%s", arr[0]);
}
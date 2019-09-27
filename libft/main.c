#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char	*s;
	int		n;

	if (argc == 2)
	{
		s = argv[1];
		n = atoi(s);
		s = ft_itoa(n);
		printf("orig: '%d'\nitoa: '%s'\n", n, s);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n%s", argv[1], ft_strdup(argv[1]));
	}
}
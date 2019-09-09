#include <stdio.h>
#include <stdlib.h>

int	 ft_strlen(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_strlen(argv[1]));
}
#include <stdlib.h>
#include <stdio.h>

int ft_recursive_factorial(int nb);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_recursive_factorial(atoi(argv[1])));
}
#include <stdlib.h>

void	ft_is_negative(int n);

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_is_negative(atoi(argv[1]));
}
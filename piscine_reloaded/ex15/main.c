#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(argv[1]);
}
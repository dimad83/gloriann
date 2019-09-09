#include <stdlib.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(int argc, char **argv)
{
	int div, mod;
	if (argc == 3)
	{
		ft_div_mod(atoi(argv[1]), atoi(argv[2]), &div, &mod);
		printf("div %d by %d: %d %d", atoi(argv[1]), atoi(argv[2]), div, mod);
	}
}
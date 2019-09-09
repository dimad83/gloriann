#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int nbr;
	
	nbr = 33;
	ft_ft(&nbr);
	printf("%d", nbr);
}
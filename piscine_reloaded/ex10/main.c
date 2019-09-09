#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int a, b;
	
	a = -1;
	b = 1;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *ft_range(int min, int max);

int	main(int argc, char **argv)
{
	int *res;
	int len;
	int i;
	int min;
	int max;
	
	if (argc == 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		res = ft_range(min, max);
		len = max - min;
		i = 0;
		while (i < len)
			printf("%d ", res[i++]);
	}
}
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *res;
	int len;
	int i;
	
	len = max - min;
	res = malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		res[i] = min + i;
		i++;
	}	
	return (res);
}

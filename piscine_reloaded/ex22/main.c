#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int main(int argc, char **argv)
{
	int val;
	
	if (argc == 2)
	{
		val = atoi(argv[1]);
		printf("%d %d", val, ABS(val));
	}
	return (0);
}
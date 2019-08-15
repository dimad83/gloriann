#include <stdlib.h>

void	print_bits(unsigned char octet);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		print_bits(atoi(argv[1]));
	}
	return (1);
}
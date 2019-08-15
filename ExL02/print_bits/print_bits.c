#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	unsigned char mask;
	
	i = 0;
	mask = 128;
	while (i < 8)
	{
		if (mask & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i++;
		mask >>= 1;
	}
	
}
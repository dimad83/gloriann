#include <stdlib.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	char res;
	
	i = 8;
	while (i--)
	{
		res = (octet >> i & 1) + '0';
		write(1, &res, 1);
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}


int main(int argc, char **argv)
{
	unsigned char byte;
	unsigned char res;
	if (argc == 2)
	{
		byte = atoi(argv[1]);
		print_bits(byte);
		write(1, "\n", 1);
		res = swap_bits(byte);
		print_bits(res);
		
	}
}
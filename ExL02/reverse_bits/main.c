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

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char res;
	int i;
	
	i = 0;
	res = 0;
	while (i < 8)
	{
		res <<= 1;
		res += (octet >> i) & 1;
		i++;
	}
	return res;
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
		res = reverse_bits(byte);
		print_bits(res);
		
	}
}
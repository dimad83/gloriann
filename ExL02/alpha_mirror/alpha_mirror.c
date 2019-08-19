#include <unistd.h>

void	alpha_mirror(char *str)
{
	int i;
	char res;
	
	i = 0;
	while (str[i])
	{
		res = str[i];
		if ('A' <= res && res <= 'Z')
			res = 'Z' + 'A' - res;
		else if ('a' <= res && res <= 'z')
			res = 'z' + 'a' - res;
		write(1, &res, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
	return (1);
}
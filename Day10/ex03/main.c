#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*));

int starts_with_z(char* str)
{
	return str[0] == 'z';
}

int main(int argc, char** argv)
{
	if (argc > 1)
	{
		printf("%d", ft_any(argv + 1, starts_with_z));		
	}
	return 1;
}
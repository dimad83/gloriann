#include <stdio.h>
#include <stdlib.h>

int ft_count_if(char **tab, int(*f)(char*));

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return i;
}

int		main(int argc, char **argv)
{
	int i, j, slen;
	char **tab;
	int size;

	if (argc < 2)
		return (0);

	size = argc - 1;
	tab = malloc(sizeof(char*) * (size + 1));
	i = 0;
	while (i < size)
	{
		slen = 0;
		while (argv[i + 1][slen])
		{
			slen++;
		}
		tab[i] = malloc(sizeof(char) * (slen + 1));
		j = 0;
		while (j < slen)
		{
			tab[i][j] = argv[i + 1][j];
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	i =  ft_count_if(tab, &ft_strlen);
	printf("%d", i);
	
	return (0);
}

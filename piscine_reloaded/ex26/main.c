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

int		main(void)
{
	//char tab[3][3] = {"f", "  ", "gg"};
	int i;
	
	char **tab;
	tab = malloc(sizeof(char*) * 3);
	i = 0;
	while (i < 3)
	{
		tab[i] = malloc(sizeof(char) * 100);
		i++;
	}
	tab[0] = "55";
	tab[1] = "g";
	tab[2] = "";
	printf("%d", ft_count_if(tab, &ft_strlen));
	
	return (0);
}
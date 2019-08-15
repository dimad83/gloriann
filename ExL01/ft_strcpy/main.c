#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2);

int	main(void)
{
	char *dest;
	char *dest2;
	char *src;
	
	src = "sovok sdf d";
	dest2 = ft_strcpy(dest, src);
	printf("%s\n%s\n%s\n", src, dest, dest2);
}
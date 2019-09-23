#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*strnstr(const char *s, const char *find, size_t slen);
int main(int argc, char **argv)
{
	int n;

	if (argc == 4)
	{
		n = atoi(argv[3]);
		printf("strnstr\(\'%s', \'%s\', %d)\n", argv[1], argv[2], n);
		printf("my  : %s\n", ft_strnstr(argv[1], argv[2], n));
		printf("orig: %s\n", strnstr(argv[1], argv[2], n));
		//printf("my  : %s\n", ft_strstr(argv[1], argv[2]));
		//printf("orig: %s\n", strstr(argv[1], argv[2]));
	}
}

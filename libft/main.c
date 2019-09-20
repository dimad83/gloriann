#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *restrict s1, const char *restrict s2, size_t n);

int main(void)
{
	char *dest;

	dest = (char *)malloc(sizeof(*dest) * 15);

	ft_memset(dest, 0, 15);
	ft_memset(dest, 'r', 4);
	printf("%s\n", dest);
	printf("%zu\n%s\n\n", ft_strlcat(dest, "1234", 100), dest);

	ft_memset(dest, 0, 15);
	ft_memset(dest, 'r', 4);
	printf("%s\n", dest);
	printf("%zu\n%s\n", strlcat(dest, "1234", 100), dest);
	//printf("%zu\n", sizeof(dest) - 1);
}

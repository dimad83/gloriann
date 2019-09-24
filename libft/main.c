#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s);

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("ft_strtrim: '%s' => '%s'\n", argv[1], ft_strtrim(argv[1]));
}

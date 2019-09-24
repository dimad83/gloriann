#include "libft.h"
#include <stdlib.h>

void	*ft_strnew(size_t size)
{
	char	*s;

	s = (char *)malloc(size + 1);
	if (s != NULL)
		ft_memset(s, 0, size);
	return (s);
}


#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = malloc(size);
	if (ptr != NULL)
		ft_memset(ptr, 0, size);
	return (ptr);
}


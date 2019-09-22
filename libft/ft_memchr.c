#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char c2;

	ptr = (unsigned char *)s;
	c2 = (unsigned char)c;
	while(n--)
	{
		if (*ptr == c2)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

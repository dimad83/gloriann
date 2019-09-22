#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*ptr_s;
	char	*ptr_d;
	int		stop;

	stop = 0;
	if (n != 0 && src != dest)
	{
		ptr_s = (char *)src;
		ptr_d = (char *)dest;
		while (n-- && !stop)
		{
			stop = *ptr_s == c ? 1 : 0;
			*ptr_d++ = *ptr_s++;
		}
	}
	return (stop ? ptr_d : NULL);
}

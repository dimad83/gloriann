#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *dst0;

	dst0 = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst0);
}

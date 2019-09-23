#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *rs;

	rs = s + ft_strlen(s);
	while (*rs != (char)c && rs != s)
		rs--;
	if (*rs == (char)c)
		return ((char *)rs);
	return (NULL);
}

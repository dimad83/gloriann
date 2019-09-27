#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;

	s_len = ft_strlen(s);
	res = NULL;
	if (start + len <= s_len)
	{
		res = ft_strnew(len);
		if (res)
			res = ft_strncpy(res, s + start, len);
	}
	return (res);
}

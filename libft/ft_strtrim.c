#include "libft.h"
#include <stdlib.h>

int		is_whitespace(char c)
{
	return ((c == ' ' || c == '\n' || c == '\t') ? 1 : 0); 
}

char	*ft_strtrim(char const *s)
{
	char	*res;
	size_t	first;
	size_t	len;
	size_t i;

	first = 0;
	while (is_whitespace(s[first]))
		first++;
	len = 0;
	while (s[len])
		len++;
	while (len > 0 && is_whitespace(s[len - 1]))
		len--;
	len = (len > first) ? len - first : 0;
	res = (char *)malloc(len + 1);
	i = 0;
	while (i < len)
	{
		res[i] = s[first + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

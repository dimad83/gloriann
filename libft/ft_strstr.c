#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t n_len;

	n_len = ft_strlen(needle);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < n_len)
			j++;
		if (j == n_len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

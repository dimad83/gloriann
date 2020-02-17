#include <stdlib.h>

char    *ft_strdup(char *src)
{
	size_t	len;
	char	*res;

	if (src == NULL)
		return (NULL);
	len = 0;
	while (src[len])
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	while (len--)
		res[len] = src[len];
	return (res);
}

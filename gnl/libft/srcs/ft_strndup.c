#include "libft.h"
#include "stdlib.h"
/*
 * Returns a pointer to a new string which is a duplicate of the string s or
 * first n bytes of string s. If s is longer than n, only n bytes are copied,
 * and a terminating null byte ('\0') is added. Memory for the new string is
 * obtained with malloc(3), and can be freed with free(3)
 */
char	*ft_strndup(const char *s, size_t n)
{
	char	*buf;
	size_t	len;

	len = ft_strlen(s);
	len = (len < n) ? len : n;

	buf = malloc((len + 1) * sizeof(*buf));
	if (buf == NULL)
		return (NULL);
	else
	{
		ft_strncpy(buf, s, len);
		buf[len] = '\0';
		return (buf);
	}
}

#include "libft.h"
#include "stdlib.h"

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
		return (ft_strncpy(buf, s, len));
}

#include "libft.h"
#include "stdlib.h"

char	*ft_strdup(const char *s)
{
	char	*buf;

	buf = malloc((ft_strlen(s) + 1) * sizeof(*buf));
	if (buf == NULL)
		return (NULL);
	else
		return (ft_strcpy(buf, s));
}

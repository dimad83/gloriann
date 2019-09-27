#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	char	*fresh0;

	if (!s || !f)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s));
	fresh0 = fresh;
	while (*s)
		*fresh++ = f(*s++);
	return (fresh0);
}

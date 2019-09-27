#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s));
	i = 0;
	while (*s)
	{
		fresh[i] = f(i, *s++);
		i++;
	}
	return (fresh);
}

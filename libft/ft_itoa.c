#include "libft.h"

static int	st_intlen(int val)
{
	int len;

	len = 0;
	if (val < 0)
		len++;
	while (val)
	{
		val /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = st_intlen(n);
	res = ft_strnew(len);
	if (res)
	{
		i = 0;
		if (n < 0)
		{
			res[i++] = '-';
			n *= -1;
		}
		if (n == 0)
			*res = '0';
		while (n > 0)
		{
			res[len - 1] = n % 10 + '0';
			n /= 10;
			len--;
		}
	}
	return (res);
}

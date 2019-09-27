#include "libft.h"
#include <stdlib.h>

size_t get_num_substrings(char const *s, char c)
{
	size_t  i;
	size_t  num;
	size_t  len;

	i = 0;
	num = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (i == len || s[i] == c)
		{
			if (i > 0 && s[i - 1] != c)
				num++;
		}
		i++;
	}
	return (num);
}


char **get_substrings(char const *s, char c, char **res)
{
	size_t  i;
	size_t  len;
	size_t  j;
	size_t  start;

	i = 0;
	j = 0;
	start = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (i == len || s[i] == c)
		{
			if (i > 0 && s[i - 1] != c)
				res[j++] = ft_strsub(s, start, i - start);
			start = i + 1;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	num;
	char	**res;

	num = get_num_substrings(s, c);
	res = (char **)malloc(sizeof(char **) * num + 1);
	if (res)
		res = get_substrings(s, c, res);
	return res;
}

#include <stdlib.h>

int		is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n') ? 1 : 0;
}

char	*ft_strcpy(char *src, int from, int len)
{
	char	*dst;
	int		i;
	int		j;

	i = from;
	j = 0;
	dst = malloc(sizeof(char) * (len + 1));
	while (i < from + len)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (dst);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		was_space;
	int		num_words;
	char	**res;
	int		word_start;
	int		len;

	was_space = 1;
	num_words = 0;
	i = 0;
	while (str[i])
	{
		if (is_space(str[i]))
		{
			if (!was_space)
			{
				was_space = 1;
				num_words++;
			}
		}
		else
			was_space = 0;
		i++;
	}
	if (!was_space)
		num_words++;

	res = malloc(sizeof(char**) * (num_words + 1));
	i = 0;
	j = 0;
	len = 0;
	was_space = 1;
	word_start = 0;
	while (str[i])
	{
		if (is_space(str[i])) // next space or word is finished
		{
			if (!was_space) // word is finished
			{
				was_space = 1;
				res[j++] = ft_strcpy(str, word_start, len); 
				len = 0;
			}
			word_start = i + 1;
		}
		else
		{
			was_space = 0;
			len++;
		}
		i++;
	}
	if (!was_space)
		res[j] = ft_strcpy(str, word_start, len);

	res[num_words] = NULL; 

	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:21:11 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 11:59:05 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		is_whitespace(char c)
{
	return ((c == ' ' || c == '\n' || c == '\t') ? 1 : 0);
}

static size_t	get_first(char const *s)
{
	size_t	first;

	first = 0;
	while (is_whitespace(s[first]))
		first++;
	return (first);
}

char			*ft_strtrim(char const *s)
{
	char	*res;
	size_t	first;
	size_t	len;
	size_t	i;

	first = get_first(s);
	len = ft_strlen(s);
	while (len > 0 && is_whitespace(s[len - 1]))
		len--;
	len = (len > first) ? len - first : 0;
	res = (char *)malloc(len + 1);
	if (res)
	{
		i = 0;
		while (i < len)
		{
			res[i] = s[first + i];
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}

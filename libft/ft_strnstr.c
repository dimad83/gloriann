/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <gloriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 20:51:08 by gloriann          #+#    #+#             */
/*   Updated: 2020/03/03 20:52:41 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Find the first occurrence of find in s, where the search is limited to the
** first h_len characters of s.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t h_len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	n_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i < h_len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < n_len && i + j < h_len)
			j++;
		if (j == n_len)
			return ((char *)haystack + i);
		i++;
	}
	if (i == 0 && n_len == 0)
		return ((char *)haystack);
	return (NULL);
}

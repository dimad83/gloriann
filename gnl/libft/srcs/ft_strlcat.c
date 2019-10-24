/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:38:54 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 07:51:05 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	char	*ptr;
	size_t	res;

	ptr = s1;
	res = 0;
	while (*ptr++)
		res++;
	ptr--;
	if (res > n)
		res = n;
	while (*s2 && ++res < n)
		*ptr++ = *s2++;
	*ptr = '\0';
	if (*s2)
	{
		while (*s2++)
			res++;
		res--;
	}
	return (res);
}

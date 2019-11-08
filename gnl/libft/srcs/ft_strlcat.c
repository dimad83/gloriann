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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*ptr;
	size_t	res;

	ptr = dst;
	res = 0;
	while (*ptr++)
		res++;
	ptr--;
	if (res > size)
		res = size;
	while (*src && ++res < size)
		*ptr++ = *src++;
	*ptr = '\0';
	if (*src)
	{
		while (*src++)
			res++;
		res--;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:12:17 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 09:15:30 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a
** non-destructive manner.
*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*p_dst;
	char	*p_src;
	size_t	i;

	p_dst = (char *)dst;
	p_src = (char *)src;
	if (!src && !dst)
		return (NULL);
	if (src < dst)
	{
		while (n--)
			*(p_dst + n) = *(p_src + n);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(p_dst + i) = *(p_src + i);
			i++;
		}
	}
	return (dst);
}

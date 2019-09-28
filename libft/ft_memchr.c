/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:12:46 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 07:27:16 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char c2;

	ptr = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (n--)
	{
		if (*ptr == c2)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

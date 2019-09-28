/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:52:12 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 07:52:34 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*dst0;
	size_t	i;

	i = 0;
	dst0 = dst;
	while (*src && i++ < n)
		*dst++ = *src++;
	while (i++ < n)
		*dst++ = '\0';
	return (dst0);
}

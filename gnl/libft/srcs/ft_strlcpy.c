/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:38:54 by gloriann          #+#    #+#             */
/*   Updated: 2019/11/08 19:14:51 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy string src to buffer dst of size dsize.  At most dsize-1
** chars will be copied.  Always NUL terminates (unless dsize == 0).
** Returns strlen(src); if retval >= dsize, truncation occurred.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*osrc = src;
	size_t		nleft;

	nleft = size;
	if (nleft != 0)
	{
		while (--nleft != 0)
		{
			if ((*dst++ = *src++) == '\0')
				break ;
		}
	}
	if (nleft == 0)
	{
		if (size != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - osrc - 1);
}

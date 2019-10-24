/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:11:52 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 08:57:13 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	*ptr_d;
	int				stop;

	stop = 0;
	if (n != 0 && src != dest)
	{
		ptr_s = (unsigned char *)src;
		ptr_d = (unsigned char *)dest;
		while (n-- && !stop)
		{
			stop = (*ptr_s == (unsigned char)c) ? 1 : 0;
			*ptr_d++ = *ptr_s++;
		}
	}
	return (stop ? ptr_d : NULL);
}

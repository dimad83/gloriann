/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:11:36 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 07:43:29 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *ptr_s;
	char *ptr_d;

	if (n != 0 && src != dest)
	{
		ptr_s = (char *)src;
		ptr_d = (char *)dest;
		while (n--)
		{
			*ptr_d++ = *ptr_s++;
		}
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:38:54 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/20 22:14:56 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*res;
	size_t	i;

	i = 0;
	res = s1;
	while (*res)
		res++;
	while (*s2 && i++ < n)
		*res++ = *s2++;
	*res = 0;
	return (s1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:38:54 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/20 22:07:43 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strcat(char *s1, const char *s2)
{
	char *res;

	res = s1;
	while (*res)
		res++;
	while (*s2)
		*res++ = *s2++;
	*res = 0;
	return (s1);
}

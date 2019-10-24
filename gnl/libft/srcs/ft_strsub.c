/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:20:46 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 07:20:47 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;

	s_len = ft_strlen(s);
	res = NULL;
	if (start + len <= s_len)
	{
		res = ft_strnew(len);
		if (res)
			res = ft_strncpy(res, s + start, len);
	}
	return (res);
}

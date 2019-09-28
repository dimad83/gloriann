/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:14:59 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 07:15:03 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *rs;

	rs = s + ft_strlen(s);
	while (*rs != (char)c && rs != s)
		rs--;
	if (*rs == (char)c)
		return ((char *)rs);
	return (NULL);
}

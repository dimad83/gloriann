/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:20:03 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 10:46:14 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	char	*fresh0;

	if (!s || !f)
		return (NULL);
	fresh0 = ft_strnew(ft_strlen(s));
	if (fresh0)
	{
		fresh = fresh0;
		while (*s)
			*fresh++ = f(*s++);
	}
	return (fresh0);
}

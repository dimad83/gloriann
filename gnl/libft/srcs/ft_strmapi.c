/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:20:15 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 10:47:13 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s));
	if (fresh)
	{
		i = 0;
		while (*s)
		{
			fresh[i] = f(i, *s++);
			i++;
		}
	}
	return (fresh);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:13:39 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 07:13:46 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strdup(const char *s)
{
	char	*buf;

	buf = malloc((ft_strlen(s) + 1) * sizeof(*buf));
	if (buf == NULL)
		return (NULL);
	else
		return (ft_strcpy(buf, s));
}

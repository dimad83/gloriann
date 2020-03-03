/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:13:39 by gloriann          #+#    #+#             */
/*   Updated: 2019/11/08 19:15:29 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

/*
** Returns a pointer to a new string which is a duplicate of the string s.
** Memory for the new string is obtained with malloc(3), and can be freed with
** free(3)
*/

char	*ft_strdup(const char *s)
{
	char	*buf;

	buf = malloc((ft_strlen(s) + 1) * sizeof(*buf));
	if (buf == NULL)
		return (NULL);
	else
		return (ft_strcpy(buf, s));
}

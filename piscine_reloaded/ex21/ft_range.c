/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 22:55:20 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/15 16:47:19 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *res;
	int len;
	int i;

	if (min >= max)
		return (NULL);
	len = max - min;
	res = malloc(len * sizeof(*res));
	i = 0;
	while (i < len)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}

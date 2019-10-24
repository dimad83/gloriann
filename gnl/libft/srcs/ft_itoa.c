/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 07:22:09 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/28 07:35:05 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_intlen(int val)
{
	int		len;

	len = 0;
	if (val < 0)
		len++;
	else if (val == 0)
		len = 1;
	while (val)
	{
		val /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = st_intlen(n);
	res = ft_strnew(len);
	if (res)
	{
		i = 0;
		if (n < 0)
		{
			res[i++] = '-';
			n *= -1;
		}
		else if (n == 0)
			*res = '0';
		while (n > 0)
		{
			res[--len] = n % 10 + '0';
			n /= 10;
		}
	}
	return (res);
}

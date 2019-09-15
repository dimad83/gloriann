/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 22:18:49 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/12 22:19:36 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long low;
	long high;
	long mid;
	long n;

	n = nb;
	low = 0;
	high = n + 1;
	while (high - low > 1)
	{
		mid = (high + low) / 2;
		if (mid * mid < n)
			low = mid;
		else if (mid * mid == n)
			return (mid);
		else
			high = mid;
	}
	return (0);
}

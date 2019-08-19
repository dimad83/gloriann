/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:26:42 by gloriann          #+#    #+#             */
/*   Updated: 2019/08/18 15:16:12 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_put_line(char c_lft, char c_cntr, char c_rght, int width)
{
	int cur_x;

	cur_x = 0;
	while (cur_x < width)
	{
		if (cur_x == 0)
			ft_putchar(c_lft);
		else if (cur_x < width - 1)
			ft_putchar(c_cntr);
		else
			ft_putchar(c_rght);
		cur_x++;
	}
	ft_putchar('\n');
}

void	ft_put_all(char *p, int width, int height)
{
	int cur_y;

	cur_y = 0;
	if (width <= 0)
		return ;
	while (cur_y < height)
	{
		if (cur_y == 0)
			ft_put_line(p[0], p[1], p[2], width);
		else if (cur_y < height - 1)
			ft_put_line(p[3], p[4], p[5], width);
		else
			ft_put_line(p[6], p[7], p[8], width);
		cur_y++;
	}
}

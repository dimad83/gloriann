/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 22:24:34 by gloriann          #+#    #+#             */
/*   Updated: 2019/08/18 23:44:45 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "ft_list.h"
#include "rush.h"
#include "ft_string.h"

t_list		*reader(t_pattern *rush)
{
	char	buf;
	t_list	*list;

	list = NULL;
	while (read(0, &buf, 1)>0 )
	{
		ft_list_push_back(&list, buf);
		rush->size++;
		if (buf == '\n')
			rush->column++;
	}
	if (rush->column != 0)
		rush->row = rush->size / rush->column - 1;
	return (list);
}

void		checker(int x, int y, t_pattern *rush, char d)
{
	int c;
	int r;

	c = rush->column;
	r = rush->row;
	if (rush->tab[0] != 0)
		rush->tab[0] = (d == rush00(x, y, r, c) && rush->tab[0] == 1) ? 1 : 0;
	if (rush->tab[1] != 0)
		rush->tab[1] = (d == rush01(x, y, r, c) && rush->tab[1] == 1) ? 1 : 0;
	if (rush->tab[2] != 0)
		rush->tab[2] = (d == rush02(x, y, r, c) && rush->tab[2] == 1) ? 1 : 0;
	if (rush->tab[3] != 0)
		rush->tab[3] = (d == rush03(x, y, r, c) && rush->tab[3] == 1) ? 1 : 0;
	if (rush->tab[4] != 0)
		rush->tab[4] = (d == rush04(x, y, r, c) && rush->tab[4] == 1) ? 1 : 0;
}

void		verification(t_pattern *rush, t_list *list)
{
	int row;
	int col;
	int x;
	int y;

	row = rush->row;
	col = rush->column;
	y = 1;
	while (y <= col)
	{
		x = 1;
		while (x <= row + 1)
		{
			if (list->data != '\n')
			{
				checker(x, y, rush, list->data);
			}
			list = list->next;
			x++;
		}
		y++;
	}
}

t_pattern	*init_rush(void)
{
	t_pattern *rush;

	rush = (t_pattern*)malloc(sizeof(t_pattern));
	rush->column = 0;
	rush->row = 0;
	rush->size = 0;
	rush->tab = (int*)malloc(sizeof(int) * 5);
	rush->tab[0] = 1;
	rush->tab[1] = 1;
	rush->tab[2] = 1;
	rush->tab[3] = 1;
	rush->tab[4] = 1;
	return (rush);
}

int			main(void)
{
	t_list		*list;
	t_pattern	*rush;
	int			single;
	int			i;

	rush = init_rush();
	i = 0;
	single = 0;
	list = reader(rush);
	if (rush->size == 0 || list->data == 0)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	verification(rush, list);
	while (i < 5)
	{
		single += rush->tab[i];
		i++;
	}
	print_result(rush, single);
	return (0);
}

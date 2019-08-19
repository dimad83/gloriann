/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slenore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 22:08:33 by slenore           #+#    #+#             */
/*   Updated: 2019/08/18 23:25:56 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		else
			nb *= -1;
	}
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar('0' + nb % 10);
}

void	subprint(t_pattern *rush, int i, int single)
{
	if (single == 1)
		ft_putstr("[rush-0");
	else
		ft_putstr("[colle-0");
	ft_putchar('0' + i);
	ft_putstr("] [");
	ft_putnbr(rush->row);
	ft_putstr("] [");
	ft_putnbr(rush->column);
	ft_putstr("]");
}

void	print_result(t_pattern *rush, int single)
{
	int i;
	int s;

	i = 0;
	s = 0;
	while (i < 5)
	{
		if (rush->tab[i] != 0)
		{
			if (s != 0)
				ft_putstr(" || ");
			s++;
			subprint(rush, i, single);
		}
		i++;
	}
	if (s == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

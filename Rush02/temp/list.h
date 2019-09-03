/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:40:43 by gloriann          #+#    #+#             */
/*   Updated: 2019/08/18 16:19:59 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct	s_elem
{
	char		symbol;
	int			repeat;
}				t_elem;

typedef struct	s_row
{
	t_elem		elem[3];
	int			cur_elem;
}				t_row;

typedef struct	s_pattern
{
	t_row		row[4];
	int			cur_row;
}				t_pattern;

int				ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_atoi(char *str);
void			ft_put_line(char c_lft, char c_cntr, char c_rght, int width);
void			ft_put_all(char *p, int width, int height);
void			rush(int width, int height);

#endif

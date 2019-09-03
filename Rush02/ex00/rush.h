/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slenore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 22:07:45 by slenore           #+#    #+#             */
/*   Updated: 2019/08/18 22:08:03 by slenore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H
# include <stdlib.h>

typedef struct		s_pattern
{
	int *tab;
	int column;
	int row;
	int size;
}					t_pattern;

char				rush00(int x, int y, int height, int width);
char				rush01(int x, int y, int height, int width);
char				rush02(int x, int y, int height, int width);
char				rush03(int x, int y, int height, int width);
char				rush04(int x, int y, int height, int width);

#endif

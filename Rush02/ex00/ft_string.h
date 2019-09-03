/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slenore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 22:07:10 by slenore           #+#    #+#             */
/*   Updated: 2019/08/18 23:32:17 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H
# include <unistd.h>
# include "rush.h"

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
void				subprint(t_pattern *rush, int i, int single);
void				print_result(t_pattern *rush, int single);

#endif

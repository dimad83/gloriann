/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:55:04 by gloriann          #+#    #+#             */
/*   Updated: 2019/08/17 18:57:40 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		main(int argc, char **argv)
{
	int width;
	int height;

	if (argc >= 3)
	{
		width = ft_atoi(argv[1]);
		height = ft_atoi(argv[2]);
		rush(width, height);
		return (0);
	}
}

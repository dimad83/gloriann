/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:52:04 by gloriann          #+#    #+#             */
/*   Updated: 2019/08/18 22:35:22 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	rush00(int x, int y, int width, int height)
{
	if (x == 1 && y == 1)
		return ('o');
	else if (x == width && y == 1 && width > 1)
		return ('o');
	else if (x == 1 && y == height && height > 1)
		return ('o');
	else if (x == width && y == height)
		return ('o');
	else if ((x == 1 || x == width) && (y > 1 && y < height))
		return ('|');
	else if ((y == 1 || y == height) && (x > 1 && x < width))
		return ('-');
	else if (y < height + 1 && x == width + 1)
		return ('\n');
	else if (y < height && x < width)
		return (' ');
	return ('g');
}

char	rush01(int x, int y, int width, int height)
{
	if (x == 1 && y == 1)
		return ('/');
	else if (x == width && y == 1 && width > 1)
		return ('\\');
	else if (x == 1 && y == height && height > 1)
		return ('/');
	else if (x == width && y == height)
		return ('\\');
	else if ((x == 1 || x == width) && (y > 1 && y < height))
		return ('*');
	else if ((y == 1 || y == height) && (x > 1 && x < width))
		return ('*');
	else if (y < height + 1 && x == width + 1)
		return ('\n');
	else if (y < height && x < width)
		return (' ');
	return ('g');
}

char	rush02(int x, int y, int width, int height)
{
	if (x == 1 && y == 1)
		return ('A');
	else if (x == width && y == 1 && width > 1)
		return ('A');
	else if (x == 1 && y == height && height > 1)
		return ('C');
	else if (x == width && y == height)
		return ('C');
	else if ((x == 1 || x == width) && (y > 1 && y < height))
		return ('B');
	else if ((y == 1 || y == height) && (x > 1 && x < width))
		return ('B');
	else if (y < height + 1 && x == width + 1)
		return ('\n');
	else if (y < height && x < width)
		return (' ');
	return ('g');
}

char	rush03(int x, int y, int width, int height)
{
	if (x == 1 && y == 1)
		return ('A');
	else if (x == width && y == 1 && width > 1)
		return ('C');
	else if (x == 1 && y == height && height > 1)
		return ('A');
	else if (x == width && y == height)
		return ('C');
	else if ((x == 1 || x == width) && (y > 1 && y < height))
		return ('B');
	else if ((y == 1 || y == height) && (x > 1 && x < width))
		return ('B');
	else if (y < height + 1 && x == width + 1)
		return ('\n');
	else if (y < height && x < width)
		return (' ');
	return ('g');
}

char	rush04(int x, int y, int width, int height)
{
	if (x == 1 && y == 1)
		return ('A');
	else if (x == width && y == 1 && width > 1)
		return ('C');
	else if (x == 1 && y == height && height > 1)
		return ('C');
	else if (x == width && y == height)
		return ('A');
	else if ((x == 1 || x == width) && (y > 1 && y < height))
		return ('B');
	else if ((y == 1 || y == height) && (x > 1 && x < width))
		return ('B');
	else if (y < height + 1 && x == width + 1)
		return ('\n');
	else if (y < height && x < width)
		return (' ');
	return ('g');
}

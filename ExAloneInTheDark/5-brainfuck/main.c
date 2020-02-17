/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 14:20:20 by exam              #+#    #+#             */
/*   Updated: 2019/08/23 15:21:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
		write(1, &c, 1);
}

int		matching_end(char *s, int i)
{
	int deepness;

	i++;
	deepness = 0;
	while (s[i])
	{
		if (s[i] == ']')
		{
			if (deepness == 0)
				return (i);
			else
				deepness--;
		}
		if (s[i] == '[')
		{
			deepness++;
		}
		i++;
	}
	return (i);
}

int		matching_start(char *s, int i)
{
	int deepness;

	i--;
	deepness = 0;
	while (s[i])
	{
		if (s[i] == '[')
		{
			if (deepness == 0)
				return (i);
			else
				deepness--;
		}
		if (s[i] == ']')
		{
			deepness++;
		}
		i--;
	}
	return (i);
}

void	brainfuck(char *s)
{
	int		i_s;
	int 	i_a;
	char	*a;

	a = malloc(sizeof(char) * 2048);
	i_a = 0;
	while (i_a < 2048)
	{
		a[i_a] = 0;
		i_a++;
	}

	i_s = 0;
	i_a = 0;
	while (s[i_s])
	{
		if (s[i_s] == '>')
			i_a++;
		else if (s[i_s] == '<')
			i_a--;
		else if (s[i_s] == '+')
			a[i_a]++;
		else if (s[i_s] == '-')
			a[i_a]--;
		else if (s[i_s] == '.')
			ft_putchar(a[i_a]);
		else if (s[i_s] == '[')
		{
			if (a[i_a] == 0)
				i_s = matching_end(s, i_s);
		}
		else if (s[i_s] == ']')
		{
			if (a[i_a] != 0)
				i_s = matching_start(s, i_s);
		}
		i_s++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		brainfuck(argv[1]);
	}
}

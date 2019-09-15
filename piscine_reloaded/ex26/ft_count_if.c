/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 23:23:29 by gloriann          #+#    #+#             */
/*   Updated: 2019/09/15 18:39:31 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i++]) == 1)
			res++;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloriann <gloriann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:17:49 by gloriann          #+#    #+#             */
/*   Updated: 2020/03/03 22:18:56 by gloriann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Iterates a list lst and applies the function f to each link to
** create a “fresh” list (using malloc(3)) resulting from the successive
** applications of f. If the allocation fails, the function
** returns NULL.
** Param. #1 A pointer’s to the first link of a list.
** Param. #2 The address of a function to apply to each link of a list.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*a;

	if (lst == NULL)
		return (NULL);
	else
	{
		a = (t_list *)malloc(sizeof(lst));
		if (a == NULL)
			return (NULL);
		a = f(lst);
		a->next = ft_lstmap(lst->next, f);
		return (a);
	}
}

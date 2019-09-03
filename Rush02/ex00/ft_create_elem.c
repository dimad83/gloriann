/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slenore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:27:27 by slenore           #+#    #+#             */
/*   Updated: 2019/08/17 23:38:39 by slenore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(char data)
{
	t_list *ft_list;

	ft_list = malloc(sizeof(t_list));
	ft_list->data = data;
	ft_list->next = NULL;
	return (ft_list);
}

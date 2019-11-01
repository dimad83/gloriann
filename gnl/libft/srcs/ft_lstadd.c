#include "libft.h"

/*
** Adds the element new at the beginning of the list.
** Param. #1 The address of a pointer to the first link of a list.
** Param. #2 The link to add at the beginning of the list.
*/

void	ft_lstadd(t_list **start, t_list *link)
{
	if (*start != NULL)
		link->next = *start;
	*start = link;
}
#include "libft.h"

/*
** Takes as a parameter the address of a pointer to a link and
** frees the memory of this link and every successors of that link
** using the functions del and free(3). Finally the pointer to
** the link that was just freed must be set to NULL (quite similar
** to the function ft_memdel from the mandatory part).
** Param. #1 The address of a pointer to the first link of a list that
** needs to be freed.
** Param. #1 The address of a pointer to the first link of a list that needs
** to be freed.
*/

void	ft_lstdel(t_list **link, void (*del)(void *, size_t))
{
	t_list	*next;

	while(*link != NULL)
	{
		next = (*link)->next;
		ft_lstdelone(link, del);
		*link = next;
	}
}
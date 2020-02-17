#include <stdlib.h>
#include "list.h"

typedef struct			s_addr_list
{
	t_list				*addr;
	struct s_addr_list  *next;
}						t_addr_list;

int        cycle_detector(const t_list *list)
{
	t_addr_list	*a_item;
	t_addr_list	*a_head;
	t_addr_list *new_a_item;
	t_list		*l_item;
	
	a_head = a_item;
	a_item->next = NULL;
	a_item->addr = NULL;
	l_item = list;

	while (list != NULL)
	{
		// check		
		a_item = a_head;
		while (a_item != NULL)
		{
			if (a_item->addr == list)
				return (1);
			a_item = a_item->next;
		}
		// add
		new_a_item = malloc(sizeof(t_addr_list));
		new_a_item->addr = list;
		new_a_item->next = NULL;
		a_item->next = new_a_item;

		list = list->next;
	}
	return (0);
}

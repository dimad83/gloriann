#include "list.h"
#include <stdlib.h>

int	found_the_same(const t_list *list)
{
	const t_list *cur_list;

	cur_list = list;
	while (list->next != NULL)
	{
		list = list->next;
		if (cur_list == list)
			return (1);
	}
	return (0);
}

int	cycle_detector(const t_list *list)
{
	if (list == NULL || list->next == NULL)
		return (0);

	while (list->next != NULL)
	{
		if (found_the_same(list))
			return (1);
		list = list->next;
	}
	return (0);
}

int        cycle_detector2(const t_list *list)
{
	const t_list	*slow;
	const t_list	*fast;

	slow = list;
	fast = list;
	if (!list)
		return (0);
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			return (1);
	}
	return (0);
}
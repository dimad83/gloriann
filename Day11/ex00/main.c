#include "ft_list.h"
#include "ft_create_elem.c"

int main(void)
{
	t_list *item = ft_create_elem("ff");
	printf("%s\n", (char*)item->data);
	printf("%p\n", item->next);
	return 1;
}
#include "list.h"

void	list_foreach(t_linked_list *list, void (*f)(void *))
{
	t_node *curr;
	int		i;

	if (list == 0 || f == 0)
		return ;
	curr = list->head;
	i = 0;
	while (i < (int)list->size)
	{
		f(curr->data);
		i++;
	}
}

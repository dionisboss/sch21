#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	while(begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}


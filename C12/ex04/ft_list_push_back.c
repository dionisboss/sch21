
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	if ((*begin_list) != NULL)
	{
		tmp = ft_create_elem(data);
		while((*begin_list) != NULL)
		{
			(*begin_list) = (*begin_list)->next;
		}
		(*begin_list) = tmp;
	}
	else 
		(*begin_list) = ft_create_elem(data);
}


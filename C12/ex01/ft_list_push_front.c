//header//

#include "ft_list.h"
#include <stdlib.h>
t_list *ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = NULL;
	tmp = (t_list *)malloc(sizeof(t_list));
	if (tmp != NULL)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (*begin_list != NULL)
	{
		tmp = ft_create_elem(data) ;
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else 
		*begin_list = ft_create_elem(data);
}

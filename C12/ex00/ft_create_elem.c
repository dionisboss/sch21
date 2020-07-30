//header

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

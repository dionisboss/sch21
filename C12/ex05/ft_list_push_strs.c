#include "ft_list.h"

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

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list *start;

	if(size <= 0)
		return (NULL);
	size--;
	start = ft_create_elem(strs[size]);
	while (--size >= 0)
		ft_list_push_front(&start,strs[size]);
	return(start);
}

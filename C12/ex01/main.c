#include <stdio.h>

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



int	main(void)
{
	t_list *ex01;
//	int *data0;
	int *d;
	int num = 42;
	int *pnum = &num;

	printf("%s\n", "ex01");
	//*data0 = 25;

	//printf("here\n");
	ex01 = ft_create_elem(pnum);
	d = ex01->data;
	printf("%d\n\n", *d);


	num  = 43;
	pnum = &num;
	ft_list_push_front(&ex01,pnum);
	d = ex01->data;
	printf("%d\n\n", *d);

}

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


int     ft_list_size(t_list     *begin_list)
{
        t_list  *tmp;
        int     count;

        count = 0;
        while (begin_list->next != NULL)
        {
                count++;
                begin_list = begin_list->next;
                printf("***%d***\n",count);
        }
        return (count+1);
}

t_list *ft_list_last(t_list *begin_list)
{
	t_list	*tmp;
	int count = 0;

	while(begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		count++;
		printf("##%d##\n",count);
	}
	return (begin_list);
}

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	if ((*begin_list)= NULL)
	{
		tmp = ft_create_elem(data);
		while((*begin_list)->next != NULL)
		{
			(*begin_list) = (*begin_list)->next;
		}
		(*begin_list)->next = tmp;
	}
	else 
		(*begin_list) = ft_create_elem(data);
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
	printf("%s",(char *)(start->data));
	return(start);
}


int	main(void)
{
	t_list *ex01;
//	int *data0;
	int *d;
	int num = 42;
	int *pnum = &num;
	t_list **base;

	printf("%s\n", "ex01");
	//*data0 = 25;

	//printf("here\n");
	ex01 = ft_create_elem(pnum);
	d = ex01->data;
	printf("%d\n\n", *d);

	base = &ex01;
	num  = 43;
	pnum = &num;
	ft_list_push_front(&ex01,pnum);
	d = ex01->data;
	printf("%d\n\n", *d);

	printf("LAST - %p\n",ft_list_last(*base));

	num  = 44;
	pnum = &num;
	ft_list_push_front(&ex01,pnum);
	d = ex01->data;
	printf("%d\n\n", *d);

	printf("LAST - %p\n",ft_list_last(*base));

	num  = 45;
	pnum = &num;
	ft_list_push_front(&ex01,pnum);
	printf("LAST - %p\n",ft_list_last(*base));


	num  = 4322;
	pnum = &num;
	void ft_list_push_back(t_list **begin_list, void *data);
	ft_list_push_back(base, pnum);
	printf("LAST - %p\n",ft_list_last(*base));

	num  = 4322;
	pnum = &num;
	void ft_list_push_back(t_list **begin_list, void *data);
	*base = NULL;
	ft_list_push_back(base, pnum);
	printf("LAST - %p\n",ft_list_last(*base));

	num  = 123;
	pnum = &num;
	void ft_list_push_back(t_list **begin_list, void *data);
	*base = NULL;
	ft_list_push_back(base, pnum);
	printf("LAST - %d\n",ft_list_size(*base));
//////////////////////////////////////////////////////
	printf("EX05 output\n");
	char 	*array[4] = {"Hello","BITC","CODE","NOW"};
	int		size = 4;
	typedef int MyCustomType;
	t_list *ex05;

	ex05 = ft_list_push_strs(size, array);
	printf("LAST - %p\n",ft_list_last(ex05));
}


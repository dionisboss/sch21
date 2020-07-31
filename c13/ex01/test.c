#include <stdlib.h>
#include "ft_btree.h"
#include <stdio.h>
t_btree *btree_create_node(void *item)
{
	t_btree	*tmp;

	tmp = NULL;
	tmp = (t_btree *)malloc(sizeof(t_btree));
	if (tmp != NULL)
	{
		tmp->item = item;
		tmp->left = NULL;
		tmp->right = NULL;
	}
	return (tmp);
}

int	main(void)
{
	int	a;
	int	*pa;
	int *d;

	t_btree 	*ex00;

	a = 42;
	pa = &a;
//////////////////////////////////////////////////
	ex00 =  btree_create_node(pa);
	d = ex00->item;
	printf("-%d-\n",*d);

}
#include <stdlib.h>
#include "ft_btree.h"
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

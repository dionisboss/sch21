#ifndef FT_B_TREE_H
# define FT_B_TREE_H

typedef struct s_btree
{
struct s_btree *left;
struct s_btree *right;
void *item;
} t_btree;

t_btree *btree_create_node(void *item);
#endif
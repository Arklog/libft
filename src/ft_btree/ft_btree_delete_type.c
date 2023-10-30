//
// Created by pierre on 10/27/23.
//

#include "ft_btree.h"

void ft_btree_delete_type(t_ft_btree_node *tree, void (*del)(void *content, t_ft_btree_node_type type))
{
	if (!tree)
		return ;
	ft_btree_delete_type(tree->first, del);
	ft_btree_delete_type(tree->second, del);
	if (tree->content)
		del(tree->content, tree->type);
	free(tree->content);
	free(tree);
}

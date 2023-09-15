#ifndef FT_BTREE_TYPE_H
#define FT_BTREE_TYPE_H

# include <sys/types.h>

typedef u_int64_t	t_ft_btree_node_type;

typedef struct ft_btree_node {
	t_ft_btree_node_type	type;
	void					*content;
	struct ft_btree_node	*first;
	struct ft_btree_node	*second;
}	t_ft_btree_node;

#endif

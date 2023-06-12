/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstree.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 01:27:10 by pierre            #+#    #+#             */
/*   Updated: 2023/06/07 01:30:00 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSTREE_H
# define FT_BSTREE_H

# include <sys/types.h>

typedef u_int64_t	t_ft_bstree_node_type;

typedef struct ft_bstree_node {
	t_ft_bstree_node_type	type;
	size_t					depth;
	void					*content;
	struct ft_bstree_node	*first;
	struct ft_bstree_node	*second;
}	t_ft_btree_node;

typedef struct ft_bstree {
	size_t			depth;
	t_ft_btree_node	*nds;
}	t_ft_btree;

/**
 * Create a new binary tree and allocate space for mindepth depth,
 * further memory will be allocated if required
 *
 * @param mindepth	the initial depth to allocate, if zero no memory will be allocated
 *
 * @return			the binary tree or NULL on failure
 */
t_ft_btree		*ft_bstree_create(size_t mindepth);

/**
 * Delete the binary tree and free its content using f
 *
 * @param tree		the binary tree to be freed
 * @param f			a function used to free the content of each node
 *
 * @warning			tree must not be null
 * @warning			f must not be null
 */
void			ft_bstree_delete(t_ft_btree *tree, void (*f)(void *));

/**
 * Set the first child of nd to a new node containing content
 *
 * @param nd		the node to which set the child
 * @param content	the content of the child, NULL being a valid value
 *
 * @return			the address of the new node or NULL on failure
 *
 * @warning			nd must not have a child
 */
t_ft_btree_node	*ft_bstree_set_first(t_ft_btree_node *nd, void *content);

/**
 * Set the second child of nd to a new node containing content
 *
 * @param nd		the node to which set the child
 * @param content	the content of the child, NULL being a valid value
 *
 * @return			the address of the new node or NULL on failure
 *
 * @warning			nd must not have a child
 */
t_ft_btree_node	*ft_bstree_set_second(t_ft_btree_node *nd, void *content);

/**
 * Delete the node nd using f to free it's content, it's
 * parent node link will be set to null and it's children will be removed as well
 *
 * @param nd		the node to remove
 * @param f			a callback to delete it's content
 *
 * @warning			nd must not be null
 * @warning			f must not be null
 */
void			ft_bstree_delete_node(t_ft_btree_node *nd, void (*f)(void *));

#endif
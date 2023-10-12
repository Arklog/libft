/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:00:29 by pducloux          #+#    #+#             */
/*   Updated: 2023/10/11 16:00:52 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "ft_string.h"

t_ft_btree_node	*ft_btree_dup(t_ft_btree_node *tree,
					void *(*dup)(void *content, t_ft_btree_node_type type))
{
	t_ft_btree_node	*new;

	if (!tree)
		return (NULL);
	new = malloc(sizeof(t_ft_btree_node));
	if (!new)
		return (NULL);
	ft_memset(new, 0, sizeof(t_ft_btree_node));
	new->type = tree->type;
	if (tree->content)
		new->content = dup(tree->content, tree->type);
	new->first = ft_btree_dup(tree->first, dup);
	new->second = ft_btree_dup(tree->second, dup);
	return (new);
}
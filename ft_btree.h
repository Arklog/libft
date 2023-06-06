/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 01:24:35 by pierre            #+#    #+#             */
/*   Updated: 2023/06/07 01:28:15 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <sys/types.h>

typedef u_int64_t	t_ft_btree_node_type;

typedef struct ft_btree_node {
	t_ft_btree_node_type	type;
	void					*content;
	struct ft_btree_node	*first;
	struct ft_btree_node	*second;
}	t_ft_btree_node;

t_ft_btree_node	ft_btree_create(void *content);

#endif

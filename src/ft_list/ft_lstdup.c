/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:45:32 by pducloux          #+#    #+#             */
/*   Updated: 2023/07/26 14:45:33 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_string.h"

t_list	*ft_lstdup(t_list *lst, size_t content_size)
{
	t_list	*new;
	t_list	*iter;

	new = NULL;
	iter = lst;
	while (iter)
	{
		ft_lstaddback(&new, ft_lstnew(ft_memdup(iter->content, content_size)));
		iter = iter->next;
	}
	return (new);
}

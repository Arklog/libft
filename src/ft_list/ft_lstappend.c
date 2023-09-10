/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:14:44 by pducloux          #+#    #+#             */
/*   Updated: 2023/06/15 22:16:29 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lstappend(t_list *lst, t_list *new)
{
	t_list	*tmp;

	tmp = lst->list.next;
	lst->list.next = new;
	new->list.next = tmp;
}

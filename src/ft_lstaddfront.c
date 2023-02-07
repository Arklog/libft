/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 23:48:13 by pierre            #+#    #+#             */
/*   Updated: 2023/02/05 23:51:21 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddfront(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	new->next = tmp;
	*lst = new;
}
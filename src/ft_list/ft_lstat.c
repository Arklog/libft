/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:09:54 by pducloux          #+#    #+#             */
/*   Updated: 2023/06/15 17:21:18 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_math.h"

t_list	*ft_lstat(t_list *lst, int index)
{
	size_t	i;
	size_t	at;

	i = ft_absi(index);
	if ((int)i >= ft_lstsize(lst))
		return (NULL);
	if (index < 0)
		at = ft_lstsize(lst) + index;
	else
		at = ft_lstsize(lst);
	while (at--)
		lst = lst->next;
	return (lst);
}

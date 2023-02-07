/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:59:37 by pierre            #+#    #+#             */
/*   Updated: 2023/02/06 16:02:04 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstiteri(t_list *lst, int (*f)(size_t index, void *content))
{
	size_t	i;

	i = 0;
	while (lst)
	{
		if (!f(i++, lst->content))
			return (0);
		lst = lst->next;
	}
	return (1);
}

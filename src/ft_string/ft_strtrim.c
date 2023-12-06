/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtestut <vtestut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:23:11 by pierre            #+#    #+#             */
/*   Updated: 2023/12/06 16:30:30 by vtestut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strtrim(char *str, const char *set)
{
	char	*iter;
	int		removed;
	size_t	n;

	iter = str;
	while (*iter && ft_strchr(set, *iter))
		iter++;
	if (!(*iter))
		return ((int)(iter - str));
	n = ft_strlen(iter);
	removed = iter - str;
	ft_memmove(str, iter, n + 1);
	iter = iter + n - 1;
	while (ft_strchr(set, *iter))
		iter--;
	removed += ft_strlen(iter);
	ft_memset(iter + 1, '\0', ft_strlen(iter + 1));
	return (removed);
}

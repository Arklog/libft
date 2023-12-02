/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre </var/spool/mail/pierre>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:54:55 by pierre            #+#    #+#             */
/*   Updated: 2023/11/30 15:54:55 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strtrim_one(char *str, const char *set)
{
	char *iter;
	char charset[2];

	charset[1] = 0;
	iter = ft_strchr1(set, str);
	if (iter)
	{
		charset[0] = *iter;
		return (ft_strtrim(str, charset));
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:57:30 by pierre            #+#    #+#             */
/*   Updated: 2023/05/08 14:07:46 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

int		ft_atoi(const char *str)
{
	long	val;
	char	*_restrict;

	val = ft_strtol(str, &_restrict, 10);
	if (_restrict != str + ft_strlen(str))
		return (0);
	return ((int)val);
}

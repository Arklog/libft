/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:26 by pierre            #+#    #+#             */
/*   Updated: 2023/05/07 20:29:10 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

static const char	*g_base_8 = "01234567";
static const char	*g_base_10 = "0123456789";
static const char	*g_base_16 = "0123456789abcdef";

long	ft_strtol(const char *str, char **endptr, int base)
{
	char	*_base;

	if (base == 8)
		_base = g_base_8;
	else if (base == 10)
		_base = g_base_10;
	else if (base == 16)
		_base = g_base_16;
	else
		return (0);
}
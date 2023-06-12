/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:26 by pierre            #+#    #+#             */
/*   Updated: 2023/06/12 18:01:57 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"
#include "ft_math.h"

static const char	*g_base_8 = "01234567";
static const char	*g_base_10 = "0123456789";
static const char	*g_base_16 = "0123456789abcdef";

static char *set_base(int base)
{
	if (base == 8)
		return ((char *)g_base_8);
	else if (base == 10)
		return ((char *)g_base_10);
	else if (base == 16)
		return ((char *)g_base_16);
	else
		return (NULL);
}

long	ft_strtol(const char *str, char **endptr, int base)
{
	const char	*_base;
	long		result;
	int			negative;
	int			i;

	_base = set_base(base);
	if (!_base)
		return (0);
	*endptr = (char *)str;
	negative = 1;
	if (str[0] == '-')
		negative = -1 * ((++str) != NULL);
	else if (str[0] == '+')
		++str;
	result = 0;
	i = 0;
	while (*str)
	{
		result += (ft_strchr(_base, *(str++)) - _base) * ft_powi(base, i++);
		++(*endptr);
	}
	return (negative * result);
}

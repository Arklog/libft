/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:26 by pierre            #+#    #+#             */
/*   Updated: 2023/05/08 14:17:14 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"
#include "ft_math.h"
#include "libft.h"

static const char	*g_base_8 = "01234567";
static const char	*g_base_10 = "0123456789";
static const char	*g_base_16 = "0123456789abcdef";

long	ft_strtol(const char *str, char **endptr, int base)
{
	const char	*_base;
	long		result;
	int			negative;
	int			i;

	*endptr = (char *)str;
	if (base == 8)
		_base = g_base_8;
	else if (base == 10)
		_base = g_base_10;
	else if (base == 16)
		_base = g_base_16;
	else
		return (0);
	negative = 0;
	if (str[0] == '-')
		negative = (int)(*(str++));
	result = 0;
	i = 0;
	while (ft_strlen(str))
	{
		result += (ft_strchr(_base, *(str++)) - _base) * ft_powi(base, i++);
		++(*endptr);
	}
	return ((negative * -1) * result);
}

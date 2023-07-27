/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:22:26 by pierre            #+#    #+#             */
/*   Updated: 2023/07/26 14:44:36 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"
#include "ft_math.h"
#include <limits.h>

static const char	*g_base_8 = "01234567";
static const char	*g_base_10 = "0123456789";
static const char	*g_base_16 = "0123456789abcdef";

static char	*set_base(int base)
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

static int	strtol_loop(const char **str, const char *_base,
						long *result, int base)
{
	int		incr;
	char	*ptr;

	ptr = ft_strchr(_base, **str);
	if (!ptr)
		return (0);
	incr = (ptr - _base) * ft_powi(base, ft_strlen(*str) - 1);
	if (*result > (LONG_MAX - incr))
		return (0);
	*result += incr;
	++(*str);
	return (1);
}

long	ft_strtol(const char *str, char **endptr, int base)
{
	const char	*_base;
	long		result;
	int			negative;

	_base = set_base(base);
	if (!_base || ((*str == '+' || *str == '-') && ft_strlen(str) == 1))
		return (0);
	*endptr = (char *)str;
	negative = 1;
	if (str[0] == '-')
	{
		negative = -1;
		str++;
		(*endptr)++;
	}
	else if (str[0] == '+')
		++str;
	result = 0;
	while (*str && strtol_loop(&str, _base, &result, base))
		++(*endptr);
	return (negative * result);
}

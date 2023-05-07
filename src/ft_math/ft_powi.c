/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:31:10 by pierre            #+#    #+#             */
/*   Updated: 2023/05/07 20:33:07 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int		ft_powi(int base, int power)
{
	int	ret;

	if (!base)
		return (0);
	else if (power == 0)
		return (1);
	ret = base;
	while (--power)
		ret *= base;
	return (ret);
}

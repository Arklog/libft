/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:21:43 by pierre            #+#    #+#             */
/*   Updated: 2023/01/22 15:26:01 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		++i;
	return (i);
}

size_t	ft_strnlen(const char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (n-- && *str++)
		++i;
	return (i);
}

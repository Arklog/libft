/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:07:57 by pierre            #+#    #+#             */
/*   Updated: 2023/05/08 16:36:31 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	buff[1024];
	size_t	i;

	i = 0;
	while (n > 1024)
	{
		ft_memcpy(buff, src + i, 1024);
		ft_memcpy(dest + i, buff, 1024);
		i += 1024;
		n -= 1024;
	}
	ft_memcpy(buff, src + i, n);
	ft_memcpy(dest + i, buff, n);
	return (dest);
}

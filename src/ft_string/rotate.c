/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:15:10 by pierre            #+#    #+#             */
/*   Updated: 2023/05/17 22:36:24 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_math.h"

static void	r_clock(void *arr, int direction, size_t n, size_t size)
{
	char	*tmp;
	void	*juncture;

	tmp = malloc(n * direction);
	if (!tmp)
		return ;
	juncture = arr + (size - direction) * n;
	ft_memcpy(tmp, juncture, direction * n);
	ft_memmove(arr + direction * n, arr, (size - direction) * n);
	ft_memcpy(arr, tmp, direction * n);
	free(tmp);
}

static void	r_rclock(void *arr, int direction, size_t n, size_t size)
{
	char	*tmp;

	tmp = malloc(n * direction);
	if (!tmp)
		return ;
	ft_memcpy(tmp, arr, direction * n);
	ft_memmove(arr, arr + direction * n, (size - direction) * n);
	ft_memcpy(arr + (size - direction) * n, tmp, direction * n);
	free(tmp);
}

void	rotate(void *arr, int direction, size_t n, size_t size)
{
	int	dir;

	dir = direction % (int)size;
	if (ft_absi(dir) > size / 2)
	{
		if (direction < 0)
			r_clock(arr, size + dir, n, size);
		else
			r_rclock(arr, size - dir, n, size);
	}
	else if (dir < 0)
		r_rclock(arr, ft_absi(dir), n, size);
	else
		r_clock(arr, dir, n, size);
}

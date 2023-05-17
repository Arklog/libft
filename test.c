/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:54:39 by pierre            #+#    #+#             */
/*   Updated: 2023/05/17 22:17:04 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <stdio.h>
#include "ft_string.h"

void	print_arr(int *arr, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

int	main(int argc, char **argv)
{
	int		arr[10];

	for (int i = 0; i < 10; ++i)
		arr[i] = i;
	print_arr(arr, 10);
	rotate(arr, 1, sizeof(int), 10);
	print_arr(arr, 10);
	rotate(arr, -2, sizeof (int), 10);
	print_arr(arr, 10);
	return (0);
}

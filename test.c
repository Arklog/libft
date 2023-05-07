/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:54:39 by pierre            #+#    #+#             */
/*   Updated: 2023/05/06 17:01:46 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <stdio.h>

int	main(void)
{
	char		a[128] = {0};
	u_int32_t	b;
	int 		bw;

	ft_memset(a, 'a', 127);
	a[0] = 0;
	b = *((u_int32_t *)a);
	ft_putstrfd(a, 1);
	printf("%u", b);

	bw = `	q1
}

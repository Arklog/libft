/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:05:01 by pierre            #+#    #+#             */
/*   Updated: 2023/06/14 16:50:48 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <stdlib.h>
# include <unistd.h>
# include "ft_string.h"
# include "ft_list.h"



/**
 * @brief Return the uppercase equivalent of c
 * 
 * @param c 
 * @return The uppercase equivalent of c if c is lowercase, else return c
 */
int		ft_toupper(int c);

void	ft_putstrfd(const char *str, int fd);

char	**ft_splitcs(const char *str, const char *charset);

char	**ft_split(const char *str, int c);



#endif
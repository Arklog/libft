/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:15:35 by pierre            #+#    #+#             */
/*   Updated: 2023/07/10 01:54:02 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

/**
 * Convert the initial portion of str into a long integer according 
 * to the given base
 * @param str		the string to be converted
 * @param endptr
 * @param base		the base in which to convert
 * @return
 */
long	ft_strtol(const char *str, char **endptr, int base);

/**
 * Convert the string str into i
 * @param str
 * @return
 */
int		ft_atoi(char *str);

#endif

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
<<<<<<< Updated upstream
 * Convert the initial portion of str into a long integer according 
 * to the given base
=======
 * Convert the initial portion of str into a long integer according to the
 * given base, if successful *endptr == str evaluate to true
 *
>>>>>>> Stashed changes
 * @param str		the string to be converted
 * @param endptr
 * @param base		the base in which to convert
 * @return
 *
 * @warning			if the specified base is different from 8, 10 or 16
 * 					the function behavior is undefined
 * @warning			str must be not NULL
 * @warning			*endptr should point to something other than str (in case
 * 					of)
 */
long	ft_strtol(const char *str, char **endptr, int base);

/**
 * Convert the string str into i
 * @param str
 * @return
 */
int		ft_atoi(char *str);

#endif

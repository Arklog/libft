/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:30:17 by pierre            #+#    #+#             */
/*   Updated: 2023/06/12 22:32:14 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
#define FT_MATH_H

/**
 * Raise base to the power power
 * @param base		the base to be raised
 * @param power 	the power to which raise it
 * @return
 */
int		ft_powi(int base, int power);

/**
 * Return the absolute value of val
 *
 * @param val
 *
 * @return
 */
unsigned int 	ft_absi(int val);

/**
 * Store the n'th digit of val in d, return the digit on success or 0 on failure
 *
 * @param val
 * @param d		a pointer to int used to store the digit
 * @param n		the position of the digit, 0 being the first one
 *
 * @return		the n'th digit of val, or 0 if val contain less than n digit or if n < 0
 */
int		ft_digitat(int val, int *d, int n);

#endif

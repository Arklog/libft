/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:40:23 by pierre            #+#    #+#             */
/*   Updated: 2023/05/08 16:41:11 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
#define FT_CTYPE_H

/**
 * Check if a given character is a digit
 *
 * @param	c	the character
 *
 * @return		1 if true, 0 else
 */
int		ft_isdigit(int c);

/**
 * Check if a given null-terminated string is composed of digit characters
 *
 * @param	str	the string
 *
 * @return		1 if true, 0 else

 * @warning		str must be null-terminated
 * @warning		str must not be null
*/
int		ft_isdigitstr(const char *str);

/**
 * Check if a given character is alphabetic
 *
 * @param	c	the character
 *
 * @return		1 if true, 0 else
 */
int		ft_isalpha(int c);

/**
 * Check if a given string is composed of alphabetic characters
 *
 * @param	str	the string
 *
 * @return		1 if true, 0 else
 *
 * @warning		str must be null-terminated
 * @warning		str must not be null
 */
int		ft_isalphastr(const char *str);

#endif
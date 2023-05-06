/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:29:09 by pierre            #+#    #+#             */
/*   Updated: 2023/05/06 15:34:36 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
#define FT_STRING_H

#include <sys/types.h>

/**
 * Return the number of character into the null terminated string str
 *
 * @param	str	the string
 * @return		the number of character in the string
 * @warning		str must be null-terminated
 * @warning		str must not be null
 */
size_t	ft_strlen(const char *str);
/**
 * Return the number of character into the null terminated string str
 *
 * @param	str	the string
 * @param	n	the maximum number of characters to count
 * @return		the number of character in the string
 * @warning		str must be null-terminated
 * @warning		str must not be null
 */
size_t	ft_strnlen(const char *str, size_t n);

#endif

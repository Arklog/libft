/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pducloux <pducloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:29:09 by pierre            #+#    #+#             */
/*   Updated: 2023/06/18 14:40:36 by pducloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <sys/types.h>
# include <stdlib.h>

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

/**
 * Compare the string s1 and s2
 * @param s1
 * @param s2
 * @return 	A positive integer if s1 > s2, a negative one if s1 < s2
 * 			or 0 if s1 == s2
 */
int		ft_strcmp(const char *s1, const char *s2);

/**
 * Same as ft_strcmp but compare only the first n bytes of s1 and s2
 * @param s1
 * @param s2
 * @param n
 * @return
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * Return a pointer to the first occurence of c in str
 *
 * @param	str	the string to search in
 * @param	c	the character to search for
 *
 * @return		a pointer over the first occurence of c in str
 *
 * @warning		str must be null terminated
 * @warning		str must not be null
 */
char	*ft_strchr(const char *str, int c);

/**
 * @brief Allocate a new string being the concatenation of s1 and s2
 *
 * @param s1
 * @param s2
 * @return 		The new string on succes or NULL on error
 */
char	*ft_strcat(const char *s1, const char *s2);

/**
 * Return a pointer to the last occurence of c in str
 *
 * @param	str	the string to search in
 * @param	c	the character to search for
 *
 * @return		a pointer over the last occurence of c in str
 *
 * @warning		str must be null terminated
 * @warning		str must not be null
 */
char	*ft_strrchr(const char *str, int c);

/**
 * Duplicate the string pointed to by str
 *
 * @param str
 *
 * @return		The new string or NULL on error
 *
 * @warning		str must not be NULL
 */
char	*ft_strdup(const char *str);

/**
 * Duplicate at most n characters of str
 *
 * @param str
 * @param n		The maximum number of character to copy, not taking 
 * 				the NULL byte into account
 *
 * @return 		The new string or NULL on error, the new string will
 * 				be n + 1 bytes long
 *
 * @warning		str must not be null
 */
char	*ft_strndup(const char *str, size_t n);

/**
 * Copy n bytes from src to dest.
 *
 * @param	dest	destination buffer
 * @param	src		source buffer
 * @param	n		number of bytes to copy
 *
 * @return			dest
 *
 * @warning			source and dest must be at least n bytes long
 * @warning			null check are not performed
 * @warning			memory must not overlap
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copy n bytes from src to dest, memory can overlap
 *
 * @param dest
 * @param src
 * @param n
 * @return void*
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * Set the first n bytes of dest to the value v.
 *
 * @param	dest	the destination buffer
 * @param	v		the value that will be taken by each byte
 * @param	n		the number of bytes to set
 *
 * @return			dest
 *
 * @warning			dest must not be null
 * @warning			dest must be at least n bytes long
 */
void	*ft_memset(void *dest, int v, size_t n);

/**
 * Repeat copy src in dest, if n < srclen then the first n bytes of 
 * src will be copied, if n > srclen dest will be filled with src
 * and if n % srclen != 0 then the last src will not be entirely copied
 * 
 * @param dest		the destination buffer
 * @param src		the source buffer
 * @param srclen	the size of the source buffer
 * @param n			the size of the dest buffer
 * 
 * @return			dest
*/
void	*ft_memelemset(void *dest, void *src, size_t srclen, size_t n);

/**
 * Count the number of characters matching c in str.
 *
 * @param	str	the string
 * @param	c	the character
 *
 * @return		the number of character in str matching c
 *
 * @warning		str must be null terminated
 * @warning		str must not be null
 */
size_t	ft_countc(const char *str, int c);

/**
 * Count the number of character in str matching the characters in charset.
 *
 * @param	str		the string
 * @param	charset	the charset
 *
 * @return			the number of character in str matching the charset
 *
 * @warning			str must be null terminated
 * @warning			str must not be null
 * @warning			charset must be null terminated
 * @warning			charset must not be null
 *
 * @example			ft_countcs
 */
size_t	ft_countcs(const char *str, const char *charset);

/**
 * Rotate the element of arr in the given direction
 * 
 * @param arr		the array to rotate
 * @param direction	the direction and number of element in which to rotate
 * @param n			the number of element in the array
 * @param size		the size of one element
 * 
 * @warning			arr must not be NULL
*/
void	rotate(void *arr, int direction, size_t n, size_t size);

#endif

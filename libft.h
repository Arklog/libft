/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:05:01 by pierre            #+#    #+#             */
/*   Updated: 2023/03/15 21:29:53 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;

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

/**
 * @brief Return the uppercase equivalent of c
 * 
 * @param c 
 * @return The uppercase equivalent of c if c is lowercase, else return c
 */
int		ft_toupper(int c);

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

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Allocate a new string being the concatenation of s1 and s2
 * 
 * @param s1 
 * @param s2 
 * @return The new string on succes or NULL on error
 */
char	*ft_strcat(const char *s1, const char *s2);

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

char	*ft_strdup(const char *str);

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
 * @brief Create a new string from the concatenation of s1 and s2
 * 
 * @param s1 
 * @param s2 
 * @return s1 + s2 or null in case of error 
 * 
 * @warning s1 and s2 must not be null
 */
char	*ft_strcat(const char *s1, const char *s2);

void	ft_putstrfd(const char *str, int fd);

char	**ft_splitcs(const char *str, const char *charset);

char	**ft_split(const char *str, int c);

t_list	*ft_lstnew(void *content);

void	ft_lstaddfront(t_list **lst, t_list *new);

void	ft_lstaddback(t_list **lst, t_list *new);

int		ft_lstsize(t_list	*lst);

t_list	*ft_lstlast(t_list	*lst);

int		ft_lstiteri(t_list *lst, int (*f)(size_t i, void *content));

#endif
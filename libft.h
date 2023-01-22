#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>

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
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

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

char	*ft_splitcs(const char *str, const char *charset);

char	*ft_splitc(const char *str, int c);

char	*ft_split(const char *str);

#endif
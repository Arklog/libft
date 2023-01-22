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

 * @return		the number of character in the string

 * @warning		str must be null-terminated
 * @warning		str must not be null
*/
size_t	ft_strnlen(const char *str, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memset(void *dest, int v, size_t n);

size_t	ft_countc(const char *str, int c);

char	*ft_splitcs(const char *str, const char *charset);

char	*ft_splitc(const char *str, int c);

char	*ft_split(const char *str);

#endif
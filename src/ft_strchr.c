#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i-- && *str != c)
		++str;
	if (*str == c)
		return ((char *)str);
	return (NULL);
}
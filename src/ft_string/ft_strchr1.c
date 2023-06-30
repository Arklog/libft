#include "ft_string.h"

char	*ft_strchr1(const char *str, const char *charset)
{
	while (*str)
	{
		if (ft_strchr(charset, *str))
			return ((char *)str);
		++str;
	}
	return (NULL);
}
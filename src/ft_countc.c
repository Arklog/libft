#include "libft.h"

size_t	ft_countc(const char *str, int c)
{
	size_t	i;
	size_t	count;

	i = ft_strlen(str);
	count = 0;
	while (i--)
		if (c == str[i])
			++count;
	return (count);
}

size_t	ft_countcs(const char *str, const char *charset)
{
	size_t	i;
	size_t	count;

	i = ft_strlen(charset);
	count = 0;
	while (i--)
		count += ft_countc(str, charset[i]);
	return (count);
}

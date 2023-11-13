#include "ft_string.h"

char *ft_strinsertn(const char *src, size_t begin, const char *what)
{
	char	*new;
	size_t	srclen;
	size_t	whatlen;

	srclen = ft_strlen(src);
	whatlen = ft_strlen(what);
	new = malloc(srclen + whatlen + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, src, begin);
	ft_memcpy(new + begin, what, whatlen);
	if (srclen > begin)
		ft_memcpy(new + begin + whatlen, src + begin, srclen - begin);
	new[srclen + whatlen] = '\0';
	return (new);
}

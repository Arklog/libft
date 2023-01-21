#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t		i;
	u_int64_t	v64;

	v64 = 0x0101010101010101 * (u_int8_t)c;
	i = n / sizeof(u_int64_t);
	while (i--)
		*((u_int64_t *)dest + i) = v64;
	i = n % (sizeof(u_int64_t));
	while (i--)
		*((u_int8_t *)dest + n - 1 - i) = (u_int8_t)c;
	return (dest);
}
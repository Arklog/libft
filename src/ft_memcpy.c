#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n / sizeof(u_int64_t);
	while (i--)
		*((u_int64_t *)dest + i) = *((const u_int64_t *)src + i);
	i = n % sizeof(u_int64_t);
	while (i--)
		*((u_int8_t *)dest + n - i - 1) = *((const u_int8_t *)src + n - i - 1);
	return (dest);
}
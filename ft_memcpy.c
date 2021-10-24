#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ret;

	ret = dest;
	if (src < dest)
		while (n-- > 0)
			*(char *)dest++ = *(char *)src++;
	else
		return (NULL);
	return (ret);
}

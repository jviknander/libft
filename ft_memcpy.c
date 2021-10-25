#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ret;
	const unsigned char	*s:
	size_t			i;

	ret = dest;
	s = src;
	if (ret != s)
	{
		i = 0;
		while (i < n)
			ret[i++] = s[i++];
	}
	return (ret)
}

/*
	ret = dest;
	if (src < dest)
		while (n-- > 0)
			*(char *)dest++ = *(char *)src++;
	else
		return (NULL);
	return (ret);

*/


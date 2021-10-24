#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*ret;

	ret = dest;
	if (src > dest)
		while (n-- > 0)
			*(char *)(dest + n) = *(char *)(src + n);
	else 
		while (n-- > 0)
			*(char *)dest++ = *(char *)src++;
	return (ret);
}

/*
(src > dest) src é "maior" que dest, está à esquerda
(n-- > 0) como src é maior que dest, caso haja overlap, o n "anda para trás"
(dest + n) significa 
*/

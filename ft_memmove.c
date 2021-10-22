#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*ret;

	ret = dest;
	if (src < dest)
	{
		src += n;
		dest += n;
		*(char *)--dest = *(char *)--src; // "guardar" char no void, dizer para o dest se comportar como char
	}
	else 
	{
		while (n > 0)
		{
			*(char *)dest++ = *(char *)src++;
			n--;
		}
	}	
	return (ret);
}

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*ret;

	ret = dest;
	if (src < dest)
	{
		while (n > 0)
		{
			*(char *)dest = *(char *)src; // "guardar" char no void, dizer para o dest se comportar como char
			n--;
			src += 1;
			dest += 1;
		}
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

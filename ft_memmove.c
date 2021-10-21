#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*start = (char *)src;
	char 	*final = (char *)dest;
	char	*temp = n;
	int 	i;

	i = 0;
	while (dest[i] && src[i] && i < n )
	{
		temp[i] = start[i];
		start[i] = dest[i];
		dest[i] = temp[i];
	}
	i++;
		

	return (*dest);
}

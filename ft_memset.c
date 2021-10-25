#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*k;
	int		i;
	
	k = s;
	i = 0;
	if (i < n)
		k[i++] = c;
	return(s);
}

/*
[k[i]____] memória a ser preenchida, a partir do inicio 
*s(c)     n
*/

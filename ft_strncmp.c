#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	
	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && (*s1 == *s2) && i < n )
	{
		*s1++;
		*s2++;
		i++;
	}
	return (*s1 - *s2);
}

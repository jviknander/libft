#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	if (!to_find || !*to_find)
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while (((i + j) < len) && str[i + j] == to_find[i])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

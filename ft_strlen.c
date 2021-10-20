#include "libft.h"

int	ft_strlen(char *str)
{
	const char	*o_str = str;

	while (*str)
		str++;
	return (str - o_str);
}

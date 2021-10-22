#include "libft.h"
#include <string.h>

int	main()
{{
	char *src = "ola";
	char dest[5] = "ines";
	size_t n = 3;
	void *ret;

	ret = ft_memmove(dest, src, n);
	printf("%s = dest, %s = src, %s = ret",dest, src, ret);
}
{
	char *src = "ola";
	char dest[5] = "ines";
	size_t n = 3;
	void *ret;

	ret = memmove(dest, src, n);
	printf("\n%s = dest, %s = src, %s = ret\n",dest, src, ret);

}

}

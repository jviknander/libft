#include "libft.h"
#include <string.h>
#include <stdlib.h>

int	main()
{
	char *src = calloc(5, 1);
	char *dest = src + 2;
	size_t n = 3;
	void *ret;

	strcpy(src, "ola");
	printf("src is %s/n", src);
	
	ret = ft_memmove(dest, src, n);
	printf("\n%s = dest, %s = src, %s = ret\n",dest, src, (char *) ret);
}

#include "libft.h"
#include <string.h>
#include <stdlib.h>

int	main()
	{
	char *src = calloc(5, 1);
	char *dest = malloc(10);
	size_t n = 10;
	void *ret;

	strcpy(src, "ola");
	src[4] = 'x';
	printf("src is %s\n", src);
	
	ret = ft_memmove(src, src + 2, n);
	printf("\n%s = dest, %s = src, %s = ret\n",dest, src, (char *) ret);
}

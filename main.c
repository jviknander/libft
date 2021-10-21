#include "libft.h"
#include <string.h>

int	main()
{
	char start[100] = "Geeksfor";
	memmove(start+5, start, strlen(start)+1);
	printf("\n%s", start);
	return (0);
}


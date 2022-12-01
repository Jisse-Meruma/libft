#include <stdio.h>
#include "libft.h"



int	main(void)
{
	char *p;
	p = ft_strnstr("Hello everybody hows life", "ho", 80);
	printf("%s", p);

}
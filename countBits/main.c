#include <stddef.h>
#include <stdio.h>

size_t countBits(unsigned value);

int	main(void)
{
	size_t		res;
	unsigned	value;

	res = 0;
	value = 0;
	
	scanf("%d", &value);
	res = countBits(value);
	printf("%d\n", res);
	return (0);
}

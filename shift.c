#include <stdio.h>

int	main()
{
	unsigned char	a = 5;
	
	printf("a << 1 = %d\n", a << 1);
}

// 5 x (2^1)
// 0 0 0 0 0 1 0 1 (5)
// 0 0 0 0 1 0 1 0 (10)

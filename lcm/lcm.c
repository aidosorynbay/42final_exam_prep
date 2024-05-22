unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a > b)
	{
		n = a;
	}
	else
	{
		n = b;
	}
	while (n % a != 0 || n % b != 0)
	{
		n++;
	}
	return n;
}


#include <stdio.h>
int	main(void)
{
	printf("%u", lcm(8, 13));
}
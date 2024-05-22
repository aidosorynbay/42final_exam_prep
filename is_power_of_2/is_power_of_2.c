int	is_power_of_2(unsigned int n)
{
	unsigned int num = 1;
	while (num < n)
	{
		num = num * 2;
	}	
	if (num == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

#include <stdio.h>
int	main(void)
{
	printf("%i", is_power_of_2(64));
}
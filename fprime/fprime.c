#include <stdio.h>
#include <stdlib.h>

void	fprime(unsigned int n)
{
	unsigned int i = 2;
	if (n == 1)
	{
		printf("%u", 1);
		return ;
	}
	else
	{
		while (n > 1)
		{
			if (n % i == 0)
			{
				printf("%u", i);
				n /= i;
				if (n > 1)
				{
					printf("*");
				}
			}
			else
			{
				i++;
			}
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		fprime(atoi(argv[1]));
	}
	printf("\n");
}
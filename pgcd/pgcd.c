#include <stdlib.h>
#include <stdio.h>

int	pgcd(char *str1, char *str2)
{
	int num1 = atoi(str1);
	int num2 = atoi(str2);
	int n;
	int i = 1;
	int result;
	if (num1 > num2)
	{
		n = num2;
	}
	else
		n = num1;
	while (i <= n)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			result = i;
		}
		i++;
	}
	return result;
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i", pgcd(argv[1], argv[2]));
	}
	printf("\n");
}
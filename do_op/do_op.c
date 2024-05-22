#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	do_op(char *str1, char *str2, char *str3)
{
	int num1 = atoi(str1);
	int num2 = atoi(str3);

	if (str2[0] == '+')
	{
		return num1 + num2;
	}
	else if (str2[0] == '-')
	{
		return num1 - num2;
	}
	else if (str2[0] == '*')
	{
		return num1 * num2;
	}
	else if (str2[0] == '/')
	{
		return num1 / num2;
	}
	return 0;
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%i\n", do_op(argv[1], argv[2], argv[3]));
	}
	else
	{
		write(1, "\n", 1);
	}
}
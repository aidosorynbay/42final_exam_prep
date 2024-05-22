#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int n)
{
	if (n > 9)
	{
		putnbr(n / 10);
	}
	putchar(n % 10 + '0');
}

int	main(int argc, char *argv[])
{
	int n;
	if (argc == 1)
	{
		write(1, "0", 1);
		write (1, "\n", 1);
		argv[0][0] += 1;
	}
	else
	{
		n = argc - 1;
		putnbr(n);
		write (1, "\n", 1);
	}
}
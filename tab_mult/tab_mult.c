#include <unistd.h>

int	a_toi(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return n;
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	int_to_str(int num)
{
	if (num > 9)
	{
		int_to_str(num / 10);
	}
	ft_putchar(num % 10 + '0');
}

void	tab_mult(int n)
{
	int i = 1;
	while (i < 10)
	{
		int_to_str(i);
		write (1, " x ", 3);
		int_to_str(n);
		write (1, " = ", 3);
		int_to_str(n*i);
		write (1, "\n", 1);
		i++;
	}
	
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		tab_mult(a_toi(argv[1]));
	}
	else
		write (1, "\n", 1);
}
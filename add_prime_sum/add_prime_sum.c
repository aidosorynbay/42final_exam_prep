#include <unistd.h>

int	prev_prime(int n)
{
	int nb = 2;
	int j;
	int result = 0; 
	while (nb <= n)
	{
		j = 2;
		if (nb == 2)
		{
			result = result + nb;
			nb++;
		}
		else
		{
			while (j * j <= nb)
			{
				if (nb % j != 0)
				{
					j++;
				}
				else
				{
					break;
				}
			}
			if (j * j > nb)
			{
				result = result + nb;
				nb++;
			}
			else
			{
				nb++;
			}
		}
	}
	return result;
}

void	putchar(char c)
{
	write (1, &c, 1);
}

void	putnbr(int num)
{
	if (num > 9)
	{
		putnbr(num / 10);
	}
	putchar(num % 10 + '0');
}


int	a_toi(char *str)
{
	int i = 0;
	int result = 0;
	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return result;
}

void	add_prime_sum(char *str)
{
	int num = a_toi(str);
	int result = prev_prime(num);
	putnbr(result);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		add_prime_sum(argv[1]);
	}
	write (1, "\n", 1);
}
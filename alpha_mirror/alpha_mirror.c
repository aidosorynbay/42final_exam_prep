#include <unistd.h>

void	alpha_mirror(char *str)
{
	int i = 0;
	int count = 0;
	char ch = '\0';

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			count = str[i] - 'a';
			ch = 'z' - count;
			write(1, &ch, 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count = str[i] - 'A';
			ch = 'Z' - count;
			write(1, &ch, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
}
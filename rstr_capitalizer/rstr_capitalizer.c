#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == 32 || str[i] == '\t')
		{
			write (1, &str[i], 1);
			i++;
		}
		
		if (str[i] == '\0')
		{
			return ;
		}
		
		while (str[i] != 32 && str[i] != '\t' && str[i] != '\0')
		{
			if (str[i + 1] == 32 || str[i + 1] == '\t' || str[i + 1] == '\0')
			{
				str[i] -= 32;
				write (1, &str[i], 1);
			}
			else
			{
				write (1, &str[i], 1);
			}
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
}
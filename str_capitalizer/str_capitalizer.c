#include <unistd.h>
#include <stdio.h>
void ft_capitalize(char *str)
{
	int j;

	j = 0;
	while(str[j] != '\0')
	{
		if (str[j] >= 65 && str[j] <= 90)
		{
			str[j] = str[j] + 32;
		}
		j = j + 1;
	}

	j = 0;
	while(str[j] != '\0')
	{
		while (str[j] == 32 || (str[j] >= 9 && str[j] <= 13))
		{
			write(1, &str[j], 1);
			j = j + 1;
		}
		while (str[j] >= 97 && str[j] <= 122 && str[j] != '\0')
		{
			if (j == 0 || str[j - 1] == 32 || (str[j - 1] >= 9 && str[j - 1] <= 13))
			{
				str[j] = str[j] - 32;
				write(1, &str[j], 1);
			}
			else
			{
				write(1, &str[j], 1);
			}
			j = j + 1;
		}
		if (str[j] != '\0')
		{
			write(1, &str[j], 1);
			j++;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "\n", 1);
		return 0;
	}

	int i = 1;

	while(i < argc)
	{
		ft_capitalize(argv[i]);
		write(1, "\n", 1);
		i = i + 1;
	}

	return (0);
}
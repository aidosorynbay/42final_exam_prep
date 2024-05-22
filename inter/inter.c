#include <unistd.h>

int	write_no_doubles(char *str, char ch, int pos)
{
	int i = 0;
	
	while (i < pos)
	{
		if (str[i] == ch)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

void	inter_string(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] != str2[j])
		{
			j++;
		}
		else
		{
			if (write_no_doubles(str1, str1[i], i) == 1)
			{
				write(1, &str1[i], 1);
				i++;
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
	if (argc == 3)
	{
		inter_string(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
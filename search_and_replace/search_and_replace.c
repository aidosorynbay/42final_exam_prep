#include <unistd.h>
void	search_and_replace(char *str1, char *str2, char *str3)
{
	int i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[0])
		{
			str1[i] = str3[0];
			write(1, &str1[i], 1);
		}
		else
		{
			write(1, &str1[i], 1);
		}
		i++;
	}
}

int	str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	if (argc == 4 && str_len(argv[2]) == 1 && str_len(argv[3]) == 1)
	{
		search_and_replace(argv[1], argv[2], argv[3]);
	}
	write(1, "\n", 1);
}
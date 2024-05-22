#include <unistd.h>

void	epur_str(char *str)
{
	int i = 0;
	int first_word = 1;

	while (str[i] != '\0')
	{
		while (str[i] == 32 || str[i] == '\t')
		{
			i++;
		}
		
		if (str[i] == '\0')
		{
			return ;
		}
		
		if (first_word == 0)
		{
			write (1, " ", 1);
		}
		first_word = 0;

		while (str[i] != 32 && str[i] != '\t' && str[i] != '\0')
		{
			write (1, &str[i], 1);
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		epur_str(argv[1]);
	}
	write (1, "\n", 1);
}
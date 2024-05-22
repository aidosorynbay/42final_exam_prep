int	max(int *tab, unsigned int len)
{
	int i = tab[0];
	unsigned int j = 1;
	if (len == 0)
	{
		return 0;
	}
	while (j < len)
	{
		if (i < tab[j])
		{
			i = tab[j];
		}
		j++;
	}
	return i;
}

#include <stdio.h>
int	main(void)
{
	int arr[5] = {50, 10, 12, 2, 30};
	printf("%i\n", max(arr, 5));
}
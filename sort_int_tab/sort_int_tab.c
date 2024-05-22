void	int_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int	int_cmp(int a, int b)
{
	return a - b;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j = 0;
	while (i < size)
	{
		j = 0;
		while (tab[j] != tab[size - 1])
		{
			if (int_cmp(tab[j], tab[j + 1]) > 0)
			{
				int_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}


#include <stdio.h>
int	main(void)
{
	int arr[7] = {3, 4, 6, 2, 2, 10, 1};
	sort_int_tab(arr, 7);
	int i = 0;
	while (i < 7)
	{
		printf("%i\n", arr[i]);
		i++;
	}
}
#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
	struct s_list *curr = begin_list;
	int i = 0;

	while (curr != 0)
	{
		curr = curr->next;
		i++;
	}
	return i;
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	t_list *head;
	t_list *curr;

	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	head = malloc(sizeof(t_list));
	head->data = &a;
	curr = head;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = &b;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = &c;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = &a;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = &b;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = &d;

	curr->next = NULL;

	printf("%i", ft_list_size(head));
}
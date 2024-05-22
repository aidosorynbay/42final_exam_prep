#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *curr = begin_list;

	while (curr != NULL)
	{
		f(curr->data);
		curr = curr->next;
	}
}

void	add1(void *a)
{
	*(int*)a += 1;
}

#include <stdio.h>
int	main(void)
{
	t_list *head;
	t_list *curr;

	int a = 1;
	int b = 2;
	int c = 3;
	// int d = 4;
	int e = 5;

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
	curr->data = &e;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = &e;

	curr->next = NULL;

	ft_list_foreach(head, &add1);

	curr = head;

	while (curr != NULL)
	{
		printf("%i\n", *(int*)curr->data);
		curr = curr->next;
	}
	
}
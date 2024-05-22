#include "list.h"
#include <stdlib.h>
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*ptr;
	int	temp;

	ptr = lst;

	while (ptr->next != NULL)
	{
		if (cmp(ptr->data, ptr->next->data) == 0)
		{
			temp = ptr->data;
			ptr->data = ptr->next->data;
			ptr->next->data = temp;
			ptr = lst;
		}
		else
			ptr = ptr->next;
	}
	return (lst);
}

int compare(int a, int b)
{
	if (a > b)
	{
		return 0;
	}
	return 1;
}

#include <stdio.h>
int main()
{
	t_list *head;
	t_list *curr;

	head = malloc(sizeof(t_list));
	head->data = 1;
	curr = head;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = 2;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = 5;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = 7;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = 4;

	curr->next = malloc(sizeof(t_list));
	curr = curr->next;
	curr->data = 0;

	sort_list(head, &compare);
	curr = head;

	while (curr != NULL)
	{
		printf("%i", curr->data);
		curr = curr->next;
	}
}
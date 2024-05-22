#include <stdlib.h>
#include "list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	struct s_list *curr = *begin_list;
	struct s_list *prev = NULL;

	while (curr != NULL)
	{
		if (cmp(curr->data, data_ref) == 0)
		{
			t_list *to_free = curr;
			if (prev == NULL)
			{
				*begin_list = curr->next;
				curr = *begin_list;
			}
			else
			{
				prev->next = curr->next;
				curr = prev->next;
			}
			free(to_free);
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}

int	compare(void *a, void *b)
{
	if (*(int*)a == *(int*)b)
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

	int ref = 3;
	ft_list_remove_if(&head, &ref, &compare);
	curr = head;

	while (curr != NULL)
	{
		printf("%i\n", *(int*)curr->data);
		curr = curr->next;
	}
}
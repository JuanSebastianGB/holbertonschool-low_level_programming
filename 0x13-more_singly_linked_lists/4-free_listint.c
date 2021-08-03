#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *copy;

	copy = head;

	while (head)
	{
		copy = head->next;
		free(head);
		head = copy;
	}
}

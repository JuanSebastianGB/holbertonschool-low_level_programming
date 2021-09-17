#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: Head node of the list to free
 * Retrun: Nothing, ot is void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

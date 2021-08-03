#include "lists.h"

/**
 * free_listint2 - free memory allocated with malloc
 * @head: pointer to pointer of kind listint_t, is the head of list
 * Return - Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *copy;

	if (!head)
		return;

	while (*head)
	{
		copy = (*head)->next;
		free(*head);
		*head = copy;
	}
}

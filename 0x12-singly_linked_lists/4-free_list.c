#include "lists.h"

/**
 * free_list - freed a list_t list
 * @head: adress of the start of the list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *moving_forward;

	while (head)
	{
		moving_forward = head->next;
		free(head->str);
		free(head);
		head = moving_forward;
	}
}

#include "lists.h"

/**
* *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: Head node of the list
* @index: Index to return
* Return: Node indexed
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

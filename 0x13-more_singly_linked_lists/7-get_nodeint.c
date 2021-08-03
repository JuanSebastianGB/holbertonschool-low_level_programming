#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head node
 * @index: n node to return
 * Return: node selected
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;

		i++;
	}

	return (head);
}

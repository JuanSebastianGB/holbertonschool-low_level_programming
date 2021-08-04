#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @head: node head of the list
 * @index: node to delete
 * Return: 1 if success, 0 if is not possible
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *actual_node, *next_node;

	if (!head || !*head)
		return (-1);

	actual_node = *head;

	if (index != 0)
	{
		for (; i < index - 1; i++)
		{
			if (!actual_node->next)
				return (-1);
			actual_node = actual_node->next;
		}

		next_node = actual_node->next;
		actual_node->next = next_node->next;
		free(next_node);
		return (1);
	}

	/* Case i == 0  */
	next_node = (*head)->next;
	free(*head);
	*head = next_node;
	return (1);
}

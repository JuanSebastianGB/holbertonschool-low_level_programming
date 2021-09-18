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

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: Head node
 * @index: Index of the node to delete
 * Return: 1 if can delete otherwise 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_find = NULL;

	node_find = get_dnodeint_at_index(*head, index);
	if (node_find == NULL)
		return (-1);
	if (index == 0 && node_find->next == NULL)
	{
		free(node_find);
		*head = NULL;
		return (1);
	}
	if (index == 0 && node_find->next != NULL)
	{
		node_find->next->prev = NULL;
		*head = node_find->next;
		free(node_find);
		return (1);
	}
	if (node_find->next == NULL)
	{
		node_find->prev->next = NULL;
		free(node_find);
		return (1);
	}
	node_find->prev->next = node_find->next;
	node_find->next->prev = node_find->prev;
	free(node_find);
	return (1);
}

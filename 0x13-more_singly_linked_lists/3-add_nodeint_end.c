#include "lists.h"

/**
 * *add_nodeint_end - Adds a new node at the end of listint_t list
 * @head: pointer to a pointed to a list
 * @n: integer to add to the node
 *
 * Return: a pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *copy;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head) /*Case head is tail at same time*/
	{
		*head = new_node;
		return (new_node);
	}
	copy = *head;

	while (copy->next) /* while not reach the null (the last node) */
	{
		copy = copy->next;
	}
	copy->next = new_node;

	return (new_node);
}

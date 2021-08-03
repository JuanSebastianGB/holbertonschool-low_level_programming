#include "lists.h"

/**
 * *add_nodeint - Add a node at the beggining of the list
 * @head: pointer to a pointer of the beggining of the list
 * @n: number to add
 * Return: A new node added
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

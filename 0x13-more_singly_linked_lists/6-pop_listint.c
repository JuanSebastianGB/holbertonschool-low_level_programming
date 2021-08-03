#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: the head node
 * Return: integer representing the node deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;
	int number;

	if (!head || !*head)
		return (0);

	node_to_delete = *head;
	*head = node_to_delete->next;
	number = node_to_delete->n;
	free(node_to_delete);

	return (number);


}

#include "lists.h"

/**
 * *insert_nodeint_at_index -  Insert a node at the index gived
 * @head: Heaad of the list
 * @idx: desired index were to add the node
 * @n: value to add into the node
 * Return: Pointer to the node added
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *copy, *new_node;

	copy = *head;

	if (idx != 0)
	{
		while (i < idx && copy)
		{
			copy = copy->next;
			i++;
		}
		if (!copy)
			return (NULL);
	}

	/* -------------------------------------*/
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	/* --------------------------------------*/

	if (idx  == 0)
	{
		new_node = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = copy->next;
	copy->next = new_node;

	return (new_node);

}

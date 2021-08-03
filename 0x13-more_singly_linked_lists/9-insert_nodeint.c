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

	if (!head || !*head)
		return (NULL);

	if (idx != 0)
	{
		copy = *head;
		while (i < idx - 1 && copy)
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

	if (idx  == 0) /* case to at the beggining */
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = copy->next;
	copy->next = new_node;

	return (new_node);

}

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
 * *insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Header node
 * @idx: Index where to insert
 * @n: integer value of the added node
 * Return: Address of the indexed node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy = *h, *new = NULL, *recover = NULL;
	size_t i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || *h == NULL)
		return (NULL);
	new->n = n;
	while (copy != NULL)
	{
		if (idx == 0)
		{
			new->next = copy;
			new->prev = NULL;
			copy->prev = new;
			*h = new;
			return (new);
		}
		if (idx == i)
		{
			new->next = copy;
			new->prev = copy->prev;
			copy->prev->next = new;
			copy->prev = new;
			return (new);
		}
		copy = copy->next;
		i++;
	}
	if (idx == i && copy == NULL)
	{
		recover = get_dnodeint_at_index(*h, idx - 1);
		new->next = NULL;
		new->prev = recover;
		recover->next = new;
		return (new);
	}
	return (NULL);
}

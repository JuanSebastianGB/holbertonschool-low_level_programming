#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Header node
 * @idx: Index where to insert
 * @n: integer value of the added node
 * Return: Address of the indexed node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy = *h, *new = NULL;
	size_t i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	while (copy != NULL)
	{
		if (idx == 0)
			return (add_dnodeint(&*h, n));
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
		return (add_dnodeint_end(&*h, n));

	return (NULL);
}

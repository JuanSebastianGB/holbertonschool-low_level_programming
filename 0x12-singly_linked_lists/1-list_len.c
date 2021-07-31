#include "lists.h"

/**
 * list_len - prints the len of linked list
 * @h: pointer to the head node
 *
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *actual;

		actual = h;

	while (actual)
	{
		actual = (*actual).next;
		i++;
	}
	return (i);
}

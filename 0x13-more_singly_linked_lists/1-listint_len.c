#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head
 * Return: length of the list
 *
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = (*h).next;
		i++;
	}

	return (i);
}

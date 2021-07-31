#include "lists.h"

/**
 * list_len - prints the len of linked list
 * @h: pointer to the start of the list
 *
 * Return: Node numbers inside the list linked
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *list;

		list = h;

	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

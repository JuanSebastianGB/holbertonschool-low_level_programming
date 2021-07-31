#include "lists.h"

/**
 * print_list - prints all the elements inside the list
 * @h: pointer to the start of the list
 *
 * Return: Node numbers inside the list
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;

		i++;
	}
	return (i);
}

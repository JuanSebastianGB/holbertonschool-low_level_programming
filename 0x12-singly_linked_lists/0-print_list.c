#include "lists.h"

/**
 * print_list - prints all the elements inside the list
 * @h: pointer to the start (first node)
 *
 * Return: Node numbers
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *actual;

		actual = h;

	while (actual)
	{
		printf("[%u] %s\n", actual->len, (actual->str == NULL)
		       ? "(nil)"
		       : actual->str);
		actual = actual->next;
		i++;
	}
	return (i);
}

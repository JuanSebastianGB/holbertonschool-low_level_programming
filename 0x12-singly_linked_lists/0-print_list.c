#include "lists.h"

/**
 * print_list - prints all the elements inside the list
 * @h: pointer to the start of the list
 *
 * Return: Node numbers inside the list
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *list;

		list = h;

	while (list)
	{
		printf("[%u] %s\n", list->len, (list->str == NULL) ? "(nil)" : list->str);
		list = list->next;
		i++;
	}
	return (i);
}

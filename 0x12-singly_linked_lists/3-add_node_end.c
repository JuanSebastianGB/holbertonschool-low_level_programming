#include "lists.h"

/**
 * *add_node_end - Adds a new node at the end of list_t list
 * @head: pointer to a pointed to a list
 * @str: char to add to the node at the end
 *
 * Return: a pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_to_add, *deferencing_head;
	int i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	node_to_add = malloc(sizeof(list_t));
	if (node_to_add == NULL)
		return (NULL);

	node_to_add->str = strdup(str);
	if (node_to_add->str == NULL)
	{
		free(node_to_add);
		return (NULL);
	}
	s = node_to_add->str;
	while (s[i])
		i++;
	node_to_add->len = i;
	node_to_add->next = NULL;
	if (head[0] == NULL)
	{
		head[0] = node_to_add;
		return (node_to_add);
	}
	deferencing_head = *head;
	while (deferencing_head->next)
	{
		deferencing_head = deferencing_head->next;
	}
	deferencing_head->next = node_to_add;
	return (node_to_add);
}

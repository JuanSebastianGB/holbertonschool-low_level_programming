#include "lists.h"

/**
 * *add_node - Adds a new node at the begginign of list_t list
 * @head: pointer to a pointed to a list
 * @str: char to add to the node
 *
 * Return: a pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_to_add;
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
	node_to_add->next = *head; /* call itself */
	*head = node_to_add;
	return (node_to_add);
}

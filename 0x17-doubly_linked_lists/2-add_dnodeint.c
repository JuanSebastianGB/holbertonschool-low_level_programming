#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *  @head: Head node pass by reference
 *  @n: data of the node
 *  Return: Adress of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL) /*Actual node is not ground*/
		((*head)->next)->prev = *head;

	return (new);
}

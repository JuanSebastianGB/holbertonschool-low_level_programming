#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Head node
 * @n: int to add
 * Return: new added node (Tail)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *copy = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL) /*It is ground*/
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	copy = *head;
	while (copy->next != NULL) /* Moving to the end*/
		copy = copy->next;
	new->prev = copy;
	copy->next = new;

	return (new); /* returning added node*/
}

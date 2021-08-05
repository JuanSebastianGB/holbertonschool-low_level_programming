#include "lists.h"

/**
 * free_listint_safe - frees the memory of the list
 * @head: pointer that cintain node head address form outside
 * Return: Number of node of the list freeded.
 *
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i = 0, unique_nodes = number_of_unique_nodes(*head);
	listint_t *actual;

	if (unique_nodes)
	{
		while (i < unique_nodes)
		{
			actual = (*head)->next;
			free(*head);
			*head = actual;
			i++;
		}
		*head = NULL; /*set the last member of the list*/
	}
	else
	{
		while (*head && head)
		{
			actual = (*head)->next;
			free(*head);
			*head = actual;
		}
		*head = NULL;
	}

	head = NULL; /*Taking in consideration the tail*/
	return (unique_nodes);

}

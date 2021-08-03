#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t
 * linked list.
 * @head: first node of the list
 * Return: The sum of all n values of the nodes
 */

int sum_listint(listint_t *head)
{
	int i = 0, sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}

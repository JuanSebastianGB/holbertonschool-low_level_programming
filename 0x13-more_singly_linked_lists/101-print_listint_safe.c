#include "lists.h"

/**
 * number_of_unique_nodes - Counts the number of unique nodes
 * to avoid to print more than enough                      .
 * @head: head node.
 *
 * Return: Number of unique nodes to use.
 */

size_t number_of_unique_nodes(const listint_t *head)
{
	const listint_t *slow, *quick;
	size_t nodes = 0;

	if (!head || !head->next)
		return (0);
	slow = head->next;
	quick = slow->next;

	while (quick) /* The quicker reach null if it is inside loop never ends*/
	{
		if (quick == slow) /* Identify that is inside a loop*/
		{
			slow = head; /* In the exercise is which has 1024 int */
			/*We run from below to above */
			while (slow != quick) /* run the part outside the loop*/
			{
				slow = slow->next;
				quick = quick->next;
				nodes++;
			}
			quick = quick->next;
			while (slow != quick) /* Number inside the loop*/
			{
				quick = quick->next;
				nodes++;
			}
			return (nodes + 1);
		}
		quick = quick->next->next;
		slow = slow->next;

	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: Head node.
 *
 * Return: Number of unique nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t unique_nodes, i = 0;

	unique_nodes = number_of_unique_nodes(head);

	if (unique_nodes != 0)
	{
		while (i < unique_nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
			printf("-> [%p] %i\n", (void *)head, head->n);
	} else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			unique_nodes++;
		}
	}

	return (unique_nodes);

}

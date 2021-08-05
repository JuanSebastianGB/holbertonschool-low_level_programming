#include "lists.h"

/**
 * *find_listint_loop - finds the loop in a linked list.
 * @head: head node
 * Return: The address of the node where the loop starts, or
 * NULL if there is no loop
 *
 */

listint_t *find_listint_loop(listint_t *head)
{

	listint_t *slow, *quick;

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
			}
			return (quick);
		}
		quick = quick->next->next;
		slow = slow->next;
	}
	return (NULL);
}

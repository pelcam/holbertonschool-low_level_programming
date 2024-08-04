#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * in a dlistint_t linked list.
 * @head: The head of the list.
 *
 * Return: The sum of all the data (n) in the list.
 * If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;   /* Add the current node's data to the sum */
		head = head->next; /* Move to the next node */
	}
	return (sum);
}

#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to add to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, set new node as head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the end of the list */
	current = *head;
	while (current->next != NULL)
		current = current->next;

	/* Link the new node to the last node */
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}

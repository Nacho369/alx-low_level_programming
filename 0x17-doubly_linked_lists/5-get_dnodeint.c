#include "lists.h"


/**
 * get_dnodeint_at_index - A function that returns
 * the nth node of a dlistint_t linked list.
 *
 * @head: A pointer to the head of the list
 * @index: Index of which the function returns the node
 *
 * Return: nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	size_t iter;

	if (head == NULL)
		return (NULL);

	for (iter = 0; current != NULL; iter++)
	{
		if (iter == index)
			return (current);

		current = current->next;
	}

	return (NULL);
}

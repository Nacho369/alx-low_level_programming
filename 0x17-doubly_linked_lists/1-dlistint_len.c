#include "lists.h"


/**
 * dlistint_len - A function that returns the number of
 * elements in a linked dlistint_t list.
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		len += 1;
		current = current->next;
	}

	return (len);
}

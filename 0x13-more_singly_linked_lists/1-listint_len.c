#include "lists.h"


/**
 * listint_len - A function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);

	for (nodes = 0; h != NULL; nodes++)
		h = h->next;

	return (nodes);
}

#include "lists.h"


/**
 * list_len - A function that returns the number of elements in a
 * linked list_t list
 *
 * @h: Pointer to the head in linked list
 *
 * Return: Number of nodes in list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}

	return (len);
}

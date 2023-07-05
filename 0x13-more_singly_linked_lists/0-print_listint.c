#include "lists.h"


/**
 * print_listint - A function that prints all the elements of a
 * listint_t list.
 *
 * @h: Pointer to the head of the listint_t
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node;
	int val;

	if (h == NULL)
		return (0);

	for (node = 0; h != NULL; node++)
	{
		val = h->n;
		printf("%d\n", val);

		h = h->next;
	}

	return (node);
}

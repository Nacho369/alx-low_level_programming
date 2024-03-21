#include "lists.h"


/**
 * print_dlistint - A function that prints all the elements of a dlistint_t list
 *
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		node++;
		current = current->next;
	}

	return (node);
}

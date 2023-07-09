#include "lists.h"


/**
 * print_listint_safe - A function that prints a listint_t
 * linked list.
 *
 * @head: Pointer to the first element of the list
 *
 * Return: Number of nodes of the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int nodes;
	const listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	for (nodes = 0; temp->next != NULL; nodes++)
	{
		printf("[(nil)] %d", temp->n);
		temp = temp->next;
	}

	return (nodes);
}

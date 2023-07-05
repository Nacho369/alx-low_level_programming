#include "lists.h"


/**
 * add_nodeint_end - A function that adds a new node at the end
 * of a listint_t list.
 *
 * @head: Pointer to the first node is the linked list listint_t
 * @n: Value to assign to the element of the linked list
 *
 * Return: Pointer to the new node created
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	listint_t *iter = NULL;
	int nodes;

	newNode = malloc(sizeof(listint_t));

	if (newNode == 0)
		return (0);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode; /* Assign newNode */
	else
	{
		iter = *head; /* Use to iterate till the end */

		for (nodes = 0; iter->next != NULL; nodes++)
			iter = iter->next;

		iter->next = newNode; /* Assign newNode */
	}

	return (newNode);
}

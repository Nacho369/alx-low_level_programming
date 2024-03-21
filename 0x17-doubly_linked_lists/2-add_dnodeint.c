#include "lists.h"


/**
 * add_dnodeint - A function that adds a new node
 * at the beginning of a dlistint_t list.
 *
 * @head:This is a pointer to a pointer to the
 * head of the doubly linked list.
 * @n: This is the data (an integer) that will be stored
 * in the new node to be added at the end of the list.
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = current;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}

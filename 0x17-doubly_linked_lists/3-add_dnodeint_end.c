#include "lists.h"


/**
 * add_dnodeint_end - A function that adds a new node
 * at the end of a dlistint_t list.
 *
 * @head: This is a pointer to a pointer to the head
 * of the doubly linked list.
 * @n: This is the data (an integer) tat would be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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

	while (current != NULL && current->next != NULL)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}

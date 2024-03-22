#include "lists.h"



/**
 * insert_dnodeint_at_index - A function that inserts a new
 * node at a given position.
 *
 * @h: Pointer to the pointer to te head of the list
 * @idx: Index at which new node should beb added
 * @n: Data of new node to tbe added
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *list_len = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int ind, len = 1;

	if (new_node == NULL)
		return (NULL);

	if (*h == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (list_len != NULL)
	{
		len++;
		list_len = list_len->next;
	}

	if (idx > len - 1)
		return (NULL);

	for (ind = 0; current != NULL; ind++)
	{
		if (ind == idx - 1)
		{
			new_node->next = current->next;
			new_node->prev = current;
			current->next = new_node;
		}
		current = current->next;
	}

	return (new_node);
}

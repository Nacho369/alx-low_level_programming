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
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int node;

	if (h == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	for (node = 0; current != NULL || node + 1 == idx; node++)
	{
		if (node + 1 == idx)
		{
			if (current->next != NULL)
				current->next->prev = new_node;

			new_node->next = current->next;
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		current = current->next;
	}

	free(new_node);
	return (NULL);
}

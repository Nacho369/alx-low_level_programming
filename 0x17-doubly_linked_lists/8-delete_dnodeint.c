#include "lists.h"


/**
 * delete_dnodeint_at_index - A function that deletes the node at
 * index index of a dlistint_t linked list.
 *
 * @head: Pointer to the head of the list
 * @index: Index at which to delete element
 *
 * Return: 1 if it succeeded, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	for (counter = 0; tmp != NULL; counter++)
	{
		if (counter == index)
		{
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;

			if (tmp->prev != NULL)
				tmp->prev->next = tmp->next;

			free(tmp);
			return (1);
		}
		tmp = tmp->next;
	}

	return (-1);
}

#include "lists.h"


/**
 * delete_nodeint_at_index - A function that deletes the node at
 * index index of a listint_t linked list.
 *
 * @head: Pointer to the first element of the list
 * @index: is the index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *noded, *temp;
	int node_check = 0;

	if (*head == NULL)
		return (-1);

	noded = *head;

	if (index == 0)
	{
		*head = noded->next;
		free(noded);
		return (1);
	}
	else
	{
		for (node = 0; node <= index && noded != NULL; node++)
		{
			if (node == index)
			{
				temp = noded->next->next;
				free(noded->next);
				noded->next = temp;
				node_check = 1;
				break;
			}

			noded = noded->next;
		}
	}

	if (node_check == 0)
		return (-1);

	return (1);
}

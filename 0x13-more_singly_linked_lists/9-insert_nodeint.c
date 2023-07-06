#include "lists.h"


/**
 * insert_nodeint_at_index - A function that inserts a new node at
 * a given position.
 *
 * @head: Pointer to the head of the list listint_t
 * @idx: Index at which the new node should be inserted.
 * @n: Integer value to add to the list
 *
 * Return: Address of new element or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int indx, len = 0;
	listint_t *newNode = NULL;
	listint_t *temp = NULL;
	listint_t *list_len = NULL;
	listint_t *prev = NULL;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	list_len = *head;

	while (list_len != NULL)
	{
		len += 1;
		list_len = list_len->next;
	}

	for (indx = 0; temp != NULL; indx++)
	{
		if (idx > 0 && idx < (len - 1))
		{
			if (indx == idx)
			{
				prev->next = newNode;
				newNode->next = temp;
				break;
			}
		}
		else
			return (NULL);

		prev = temp;
		temp = temp->next;
	}

	return (newNode);
}
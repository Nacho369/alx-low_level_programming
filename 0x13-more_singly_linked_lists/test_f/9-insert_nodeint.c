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
	unsigned int i = 0;
	listint_t *temp = NULL, *new = NULL;
	int count = 0;

	temp = (struct listint_s *)malloc(sizeof(struct listint_s));
	new = (struct listint_s *)malloc(sizeof(struct listint_s));

	if (new == NULL || head == NULL || temp == NULL)
		return (NULL);

	if (idx == 0)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	if (*head == 0)
		return (NULL);
	temp = *head;
	new->n = n;
	while (temp != NULL)
	{
		if (temp == NULL)
			return (NULL);
		if (i == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			count = 1;
			break;
		}
		i++;
		temp = temp->next;
	}
	if (count == 0)
		return (NULL);
	return (new);
}

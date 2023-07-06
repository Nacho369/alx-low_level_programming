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
	unsigned int indx;
	int node_check = 0;
	listint_t *newNode = NULL;
	listint_t *temp = NULL;
	listint_t *prev = NULL;

	if (*head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (indx = 0; temp != NULL; indx++)
	{
		if (indx == idx)
		{
			prev->next = newNode;
			newNode->next = temp;
			node_check = 1;
			break;
		}
		prev = temp;
		temp = temp->next;
	}
	if (node_check == 0)
		return (NULL);

	return (newNode);
}

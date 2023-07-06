#include "lists.h"


/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list.
 *
 * @head: Pointer to the head of the linked list
 * @index: Index of the node, starting at 0
 *
 * Return: nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodeIndx = NULL;
	unsigned int indx;

	if (head == NULL)
		return (NULL);

	nodeIndx = head;

	for (indx = 0; nodeIndx != NULL; indx++)
	{
		if (indx == index)
			break;

		nodeIndx = nodeIndx->next;
	}

	return (nodeIndx);
}

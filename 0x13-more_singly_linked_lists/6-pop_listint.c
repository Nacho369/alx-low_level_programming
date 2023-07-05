#include "lists.h"


/**
 * pop_listint - A function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 *
 * @head: Double pointer to the head if the list listint_t
 *
 * Return: The head's node data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data_n;

	if (*head == NULL)
		return (0);

	temp = *head;
	data_n = temp->n;
	*head = temp->next;
	free(temp);

	return (data_n);
}

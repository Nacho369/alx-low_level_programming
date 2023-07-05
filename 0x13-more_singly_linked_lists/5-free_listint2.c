#include "lists.h"


/**
 * free_listint2 - A function that frees a listint_t list.
 *
 * @head: A double pointerto the head of the linked list listint_t
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *aux = NULL;

	if (head == NULL)
		return;

	temp = *head;

	while (temp != NULL)
	{
		aux = temp->next;
		free(temp);
		temp = aux;
	}

	*head = NULL;
}

#include "lists.h"


/**
 * free_listint - Frees a listint_t list
 *
 * @head: Pionter to the list to be freed.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;
	listint_t *sec = NULL;

	temp = head;

	while (temp != NULL)
	{
		sec = temp->next;
		free(temp);
		temp = sec;
	}

	head = NULL;
}

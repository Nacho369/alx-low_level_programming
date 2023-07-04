#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: first element of the list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;
	list_t *sec = NULL;

	if (head == NULL)
		return;

	temp = head;

	while (temp != NULL)
	{
		sec = temp->next;
		free(temp->str);
		free(temp);
		temp = sec;
	}

	head = NULL;
}

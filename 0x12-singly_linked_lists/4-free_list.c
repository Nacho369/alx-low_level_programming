#include "lists.h"


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

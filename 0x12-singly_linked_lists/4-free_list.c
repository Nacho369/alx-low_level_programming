#include "lists.h"


void free_list(list_t *head)
{
	list_t *temp = NULL, *sec = NULL;

	if (head == NULL)
		return;
	
	while (head->next != NULL)
	{
		sec = temp->next;
		free(temp->str);
		free(temp);
		temp = sec;
	}

	head = NULL;
}

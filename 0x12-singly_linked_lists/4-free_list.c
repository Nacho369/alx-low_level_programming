#include "lists.h"


void free_list(list_t *head)
{
	list_t temp = NULL, *sec = NULL

	if (head == NULL)
		return;
	else
		while (head-> != NULL)
		{
			aux = temp->free(temp->str);
			free(temp->str);
			temp = aux;
		}

	head = NULL;
}

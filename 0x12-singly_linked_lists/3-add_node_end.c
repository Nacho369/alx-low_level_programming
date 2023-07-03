#include "lists.h"


/**
 * add_node_end - Adds a new node to the end  of the list
 *
 * @head: Pointer to first element of the list
 * @str: String to write into the list
 *
 * Return: Pointer to address of new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL;
	list_t *newPtr = malloc(sizeof(list_t));

	if (newPtr == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	newPtr->str = strdup(str);
	newPtr->len = strlen(newPtr->str);
	newPtr->next = NULL;

	if (*head == NULL)
		*head = newPtr;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newPtr;
	}

	return (newPtr);
}

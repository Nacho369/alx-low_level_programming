#include "lists.h"


/**
 * add_node - Adds a new node at the beginning of the list
 *
 * @head: Pointer to first element of the list
 * @str: String to write into the list
 *
 * Return: Pointer to address of new element, NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newPtr = malloc(sizeof(list_t));

	if (*head == NULL)
		return (NULL);

	if (newPtr == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	newPtr->str = strdup(str);
	newPtr->len = strlen(newPtr->str);
	newPtr->next = *head;
	*head = newPtr;

	return (newPtr);
}

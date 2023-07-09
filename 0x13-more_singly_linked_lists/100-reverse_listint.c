#include "lists.h"


/**
 * reverse_listint - A function that reverses a listint_t linked
 * list.
 *
 * @head: Pointer to the first element of the list
 *
 * Return: The Pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *revd, *temp, *prev;

	if (head == NULL)
		return (NULL);

	revd = *head;
	prev = NULL;

	while (revd != NULL)
	{
		temp = revd->next;
		revd->next = prev;
		prev = revd;
		revd = temp;
	}

	*head = prev;

	return (prev);
}

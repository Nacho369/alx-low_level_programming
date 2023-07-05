#include "lists.h"


/**
 * add_nodeint - A function that adds a new node at the beginning
 * of a listint_t list.
 *
 * @head: Pointer to the head of the linked list
 * @n: Integer value to assign
 *
 * Return: A pointer tot the modified listint_t linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (0);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

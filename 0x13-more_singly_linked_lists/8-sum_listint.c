#include "lists.h"


/**
 * sum_listint - A function that returns the sum of all the
 * data (n) of a listint_t linked list.
 *
 * @head: Pointer to the first node in the list
 *
 * Return: Sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

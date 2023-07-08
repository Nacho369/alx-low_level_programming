#include "main.h"


/**
 * set_bit - A function that sets the value of a bit to 1 at a given
 * index.
 *
 * @n: A pointer to the integer
 * @index: Is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (n == NULL)
		return (-1);

	if (index > (sizeof(n) * 8))
		return (-1);

	mask = 1 << index;
	*n = *n | mask;

	return (1);
}

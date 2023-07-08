#include "main.h"


/**
 * get_bit - A function that returns the value of a bit at a given index
 *
 * @n: Integer whose value at @index should be returned
 * @index: Is the index, starting from 0 of the bit you want to get
 *
 * Return: @Index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}

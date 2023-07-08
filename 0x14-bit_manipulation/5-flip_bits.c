#include "main.h"


/**
 * flip_bits - A function that returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: Number to flip from
 * @m: Number to flip to
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int iter, count = 0;

	for (iter = 0; iter < 64; iter++)
	{
		if (((n >> iter) & 1) != ((m >> iter) & 1))
			count++;
	}

	return (count);
}

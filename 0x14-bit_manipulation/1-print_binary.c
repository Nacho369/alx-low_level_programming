#include "main.h"


/**
 * print_binary - A function that prints the binary representation
 * of a number.
 *
 * @n: Number to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1 << 16;
	unsigned long int res;

	if (n == 0)
	{
		_putchar(48); /* Prints 0 */
		return;
	}

	while ((n & mask) == 0)
		mask >>= 1;

	while (mask != 0)
	{
		res = n & mask;

		if (res == 0)
			_putchar(48); /* Prints 0 */
		else
			_putchar(49); /* Prints 1 */

		mask >>= 1;
	}
}

#include "main.h"


/**
 * print_square - Pints a square, followed by a new line.
 *
 * @size: Size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int sz = size;
	int row, col;

	if (sz < 0 || sz == 0)
		_putchar(10);

	for (col = 0; col < sz; col++)
	{
		for (row = 0; row < sz; row++)
		{
			_putchar(35);
		}

		_putchar(10);
	}
}

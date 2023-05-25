#include "main.h"


/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: Number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int num = n;
	int iter;

	for (iter = 0; iter < num; iter++)
	{
		if (num == 0 || num < 0)
			break;

		_putchar(95);
	}

	_putchar(10);
}

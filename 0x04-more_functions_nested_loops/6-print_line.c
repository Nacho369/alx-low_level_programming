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

	if (num <= 0)
		_putchar(10);

	for (iter = 0; iter < num; iter++)
		_putchar(95);

	_putchar(10);
}

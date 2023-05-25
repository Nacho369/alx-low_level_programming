#include "main.h"


/**
 * print_diagonal - Draws a diagonal line on the terminal.
 *
 * @n: Nmber of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int num = n;
	int iter, spc, max;

	if (num <= 0)
		_putchar(10);

	max = 0;

	for (iter = 0; iter < num; iter++)
	{

		for (spc = 0; spc < max; spc++)
		{
			_putchar(32);
		}

		_putchar(92);
		_putchar(10);
		max++;
	}
}

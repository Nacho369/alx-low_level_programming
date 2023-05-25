#include "main.h"


/**
 * print_triangle - Prints a triangle, followed by a new line.
 *
 * @size: Size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int sz = size;
	int iter, s_inc, max, spc;
	int spc_s = size - 1;

	max = 1;

	if (sz < 0 || sz == 0)
		_putchar(10);

	for (iter = 0; iter < sz; iter++)
	{
		for (spc = spc_s; spc > 0; spc--)
		{
			_putchar(32);
		}
		for (s_inc = 0; s_inc < max; s_inc++)
		{
			_putchar(35);
		}

		_putchar(10);
		spc_s--;
		max++;
	}
}

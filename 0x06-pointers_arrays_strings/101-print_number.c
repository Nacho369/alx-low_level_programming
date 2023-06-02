#include "main.h"


/**
 * print_number - Prints an integer
 *
 * @n: Integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

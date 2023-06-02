#include "main.h"


/**
 * print_number - Prints an integer
 *
 * @n: Integrr to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;
	unsigned int rev_num, digits;

	if (n < 0)
	{
		num = num * -1;
		_putchar('-');
	}

	if (num == 0)
		_putchar(48);

	rev_num = 0;

	while (num > 0)
	{
		rev_num = rev_num * 10 + (num % 10);
		num /= 10;
	}

	while (rev_num > 0)
	{
		digits = rev_num % 10;
		_putchar(48 + digits);
		rev_num /= 10;
	}
}

#include "main.h"


/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in
 * lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int row, ch;

	for (row = 0; row <= 10; row++)
	{
		for (ch = 97; ch < 123; ch++)
		{
			_putchar(ch);
		}
		_putchar(10);
	}
}

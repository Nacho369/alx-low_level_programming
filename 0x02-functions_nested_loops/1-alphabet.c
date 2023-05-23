#include "main.h"


/**
 * print_alphabet -  Prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch < 123; ch++)
	{
		_putchar(ch);
	}

	_putchar(10);
}

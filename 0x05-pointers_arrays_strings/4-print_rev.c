#include "main.h"


/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 *
 * @s: String to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int iter, rev;

	for (iter = 0; s[iter] != '\0'; iter++)
		;

	for (rev = iter; rev >= 0; rev--)
		_putchar(s[rev]);

	_putchar(10);
}

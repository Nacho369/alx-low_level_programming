#include "main.h"


/**
 * _puts - Prints a string, followed by a new line, to stdout.
 *
 * @str: String to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int iter;

	for (iter = 0; str[iter] != '\0'; iter++)
	{
		_putchar(str[iter]);
	}

	_putchar(10);

	return (0);
}

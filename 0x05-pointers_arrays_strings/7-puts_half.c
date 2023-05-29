#include "main.h"


/**
 * puts_half - Prints half of a string, followed by a new line.
 *
 * @str: String to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int iter, len, max, half;

	for (iter = 0; str[iter] != '\0'; iter++)
		;

	len = iter + 1;
	max = len / 2;

	for (half = max; str[half] != '\0'; half++)
		_putchar(str[half]);

	_putchar(10);
}

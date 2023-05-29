#include "main.h"


/**
 * puts2 - Prints every other character of a string, startin
 * with the first character, followed by a new line.
 *
 * @str: String to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int iter;

	for (iter = 0; str[iter] != '\0'; iter++)
	{
		if (iter % 2 == 0)
			_putchar(str[iter]);
	}
}

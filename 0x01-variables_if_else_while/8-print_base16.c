#include <stdio.h>


/**
 * main - Entry Point of the prigram
 *
 * Description: Prints all the numbers of base 16 in
 * lowercase, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int hex;

	for (hex = 0; hex < 16; hex++)
	{
		if (hex < 10)
			putchar(48 + hex);
		else
			putchar(97 + (hex - 10));
	}

	putchar(10); /* Prints a new line */

	return (0);
}

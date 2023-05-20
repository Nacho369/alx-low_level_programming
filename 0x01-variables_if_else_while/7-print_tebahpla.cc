#include <stdio.h>


/**
 * main - Entry Point of the program
 *
 * Description: Prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 122; ch > 96; ch--)
		putchar(ch);

	putchar(10); /* Prints new Line*/

	return (0);
}

#include <stdio.h>


/**
 * main - Entry point for the program
 *
 * Description: Prints the alphabet in lowercase and
 * uppercase followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch < 123; ch++)
		putchar(ch);

	for (ch = 65; ch < 91; ch++)
		putchar(ch);

	putchar(10);

	return (0);
}

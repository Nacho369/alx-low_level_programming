#include <stdio.h>


/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of
 * single-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
		putchar(44); /* Prints a comma character*/

		while (digit != 57)
			putchar(32); /* Print a Space */
	}

	putchar(10);

	return (0);
}

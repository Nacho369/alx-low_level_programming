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

	for (digit = 0; digit < 10; digit++)
	{
		putchar(48 + digit);

		if (digit < 9)
		{
			putchar(44); /* Prints Comma Char */
			putchar(32); /* Prints Space Char */
		}
	}

	putchar(10);

	return (0);
}

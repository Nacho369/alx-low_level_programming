#include <stdio.h>


/**
 * main - Entry point for program
 *
 * Description: Prints all single digit numbers of base
 * 10 starting from 0, followed by a new line with certain
 * conditions.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
		putchar(digit);

	putchar(10); /* Prints New Line */

	return (0);
}

#include "main.h"


/**
 * main - Entry Point of program
 *
 * Description: Program that prints _putchar, followed by
 * a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char word[] = "_putchar";

	for (i = 0; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}

	_putchar(10);

	return (0);
}

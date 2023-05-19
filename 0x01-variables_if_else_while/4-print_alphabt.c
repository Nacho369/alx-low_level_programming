#include <stdio.h>


/**
 * main - Entry point of program
 *
 * Description: Print all the lowercase letters except
 * q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch < 123; ch++)
	{
		if (ch == 101 || ch == 113)
			continue;

		putchar(ch);
	}

	putchar(10);

	return (0);
}

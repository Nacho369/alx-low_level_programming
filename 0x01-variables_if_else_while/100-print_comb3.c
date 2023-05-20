#include <stdio.h>


/**
 * main - Entry Point of the program
 *
 * Description: Prints all possible different combinations
 * of two digits which must be different
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = 0; d2 < 10; d2++)
		{
			if (d2 > d1)
			{
				putchar(48 + d1);
				putchar(48 + d2);

				if (d1 < 8 || d2 < 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);

	return (0);
}

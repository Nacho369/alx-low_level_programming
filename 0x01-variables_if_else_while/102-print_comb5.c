#include <stdio.h>


/**
 * main - Entry point of program
 *
 * Description: Prints all possible combinations of two
 * two-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int d1, d2, d3, d4;

	for (d1 = 48; d1 < 58; d1++)
	{
		for (d2 = 48; d2 < 58; d2++)
		{
			d3 = d1;
			d4 = d2 + 1;
			for (; d3 < 58; d3++)
			{
				for (; d4 < 58; d4++)
				{
					putchar(d1);
					putchar(d2);
					putchar(32);

					putchar(d3);
					putchar(d4);
					if (d1 < 57 || d2 < 56 || d3 < 57 || d4 < 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar(10);

	return (0);
}

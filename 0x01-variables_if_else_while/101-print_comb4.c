#include <stdio.h>


/**
 * main - Entry Point of the program
 *
 * Description: Prints all possible different combinations
 * of three digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int d1, d2, d3;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = 0; d2 < 10; d2++)
		{
			for (d3 = 0; d3 < 10; d3++)
			{
				if ((d2 > d1) && (d3 > d2))
				{
					putchar(48 + d1);
					putchar(48 + d2);
					putchar(48 + d3);

					if (d1 < 7 || d2 < 8 || d3 < 9)
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

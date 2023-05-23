#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: Starting point integer to print from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int num = n;
	int i;

	if (num < 98)
	{
		for (i = num; i < 99; i++)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = num; i > 97; i--)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}

	printf("\n");
}

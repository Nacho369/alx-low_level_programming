#include "main.h"


/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int iter;

	for (iter = 0; iter < n; iter++)
	{
		printf("%d", a[iter]);

		if (iter < n - 1)
			printf(", ");
	}

	printf("\n");
}

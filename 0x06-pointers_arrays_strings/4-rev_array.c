#include "main.h"


/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: Array to reverse
 * @n: Number of element of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int iter, half, first, last, max;

	half = n / 2;
	max = n - 1;

	for (iter = 0; iter <= half; iter++)
	{
		first = a[iter];
		last = a[max];
		a[iter] = last;
		a[max] = first;
		max--;
	}
}

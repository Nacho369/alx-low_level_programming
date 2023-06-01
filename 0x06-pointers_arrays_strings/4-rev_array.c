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
	int low, high, temp;

	high = n - 1;

	for (low = 0; low < high; low++)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
		high--;
	}
}

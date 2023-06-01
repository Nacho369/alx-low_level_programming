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
	int iter, temp;
	int low, high;

	high = n - 1;
	low = 0;

	for (iter = 0; low < high; iter++)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
		low++;
		high--;
	}
}

#include "search_algos.h"

/**
 * exponential_search - Searches using exponential search
 * @array: A pointer to the first element of the array to search.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: NULL, -1, the index where the value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right, left, j;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	if (i < size)
		right = i;
	else
		right = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	left = i / 2;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = (left + right) / 2;
		if (array[j] == value)
			return (j);
		else if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}
	return (-1);
}
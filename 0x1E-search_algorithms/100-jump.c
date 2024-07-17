#include "search_algos.h"


/**
 * jump_search - function that searched for a value in a
 * sorted array of integer using the jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements
 * @value: element to be searched for
 * Return: index of value or -1 if array is null or value not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump;
	size_t step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	for (jump = 0; jump < size && array[jump] < value; jump += step)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		i = jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, jump);

	if (jump >= size)
		jump = size - 1;

	for (; i < jump && array[i] < value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
	else
		return (-1);
}

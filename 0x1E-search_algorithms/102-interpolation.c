#include "search_algos.h"


/**
 * interpolation_search - Function that searched for a value in a sorted array
 * of integers using the interpolation searcj algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of value or -1 if array is null or value is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l, h;

	if (array == NULL)
		return (-1);

	for (l = 0, h = size - 1; h >= 1;)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			h = pos - 1;
		else
			l = pos + 1;
	}
	return (-1);
}

#include "function_pointers.h"


/**
 * int_index - A function that searches for an integer.
 *
 * @array: Array to be passed
 * @size: Size of the array
 * @cmp: Function pointer to the compare functiom
 *
 * Return: Index of the first element for which the cmp function does not
 * return 0, -1 if no element matches, and if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int indx;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (indx = 0; indx < size; indx++)
	{
		if (cmp(array[indx]) == 1)
			return (indx);
	}

	return (-1);
}

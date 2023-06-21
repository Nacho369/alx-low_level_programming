#include "function_pointers.h"


/**
 * array_iterator - A function that executes a function given as a parameter on
 * each element of an array.
 *
 * @array: Array passed
 * @size: Size of array
 * @action: Function to be performed on the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t indx;

	if (array != NULL && action != NULL)
	{
		for (indx = 0; indx < size; indx++)
			action(array[indx]);
	}
}

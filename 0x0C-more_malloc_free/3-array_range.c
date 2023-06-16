#include "main.h"


/**
 * array_range - A unction that creates an array of integers.
 *
 * @min: Minimum value to set allocated space to
 * @max: Maximum value to set allocated space to
 *
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int indx, iter, len;
	int *arr = NULL;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	 for (iter = min, indx = 0; iter <= max; iter++, indx++)
		 arr[indx] = iter;
	 
	 return (arr);
}

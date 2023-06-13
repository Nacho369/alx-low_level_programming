#include "main.h"


/**
 * create_array - A function that creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: Size of array
 * @c: Character to initialize the array to
 *
 * Return: Pointer to tue newly created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int iter;
	char *arr = NULL;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (iter = 0; iter < size; iter++)
	{
		arr[iter] = c;
	}

	return (arr);
}

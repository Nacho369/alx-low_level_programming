#include "main.h"


/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional array
 * of integers.
 *
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int indx, indx2;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (indx = 0; indx < height; indx++)
	{
		array[indx] = (int *) malloc(width * sizeof(int));

		if (array[indx] == NULL)
		{
			for (; indx >= 0; indx--)
				free(array[indx]);

			free(array);

			return (NULL);
		}

		for (indx2 = 0; indx2 < width; indx2++)
			array[indx][indx2] = 0;
	}

	return (array);
}

#include "main.h"


/**
 * free_grid - A function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 *
 * @grid: Pointer to the 2d array to be freed
 * @height: Height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}

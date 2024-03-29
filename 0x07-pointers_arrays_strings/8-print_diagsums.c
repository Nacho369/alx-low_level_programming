#include "main.h"


/**
 * print_diagsums - Prints the sum of the two diagonals of a
 * square matrix of integers.
 *
 * @a: Double array of integera
 * @size: Size if the array
 *
 * Return:
 */
void print_diagsums(int *a, int size)
{
	int row, col, fwd_sum = 0, bwd_sum = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
			{
				fwd_sum += a[row * size + col];
			}

			if (row + col == size - 1)
			{
				bwd_sum += a[row * size + col];
			}
		}
	}

	printf("%d, %d\n", fwd_sum, bwd_sum);
}

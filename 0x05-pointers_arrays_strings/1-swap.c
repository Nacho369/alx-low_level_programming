#include "main.h"


/**
 * swap_int - Swaps the value of two integers
 *
 * @a: First value
 * @b:Second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

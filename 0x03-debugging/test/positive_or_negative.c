#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Checks if a number is +ve, -ve, or
 * zero
 *
 * @i: Number to check
 *
 * Return: 0 (Success)
 */
int positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

	return (0);
}

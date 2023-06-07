#include "main.h"

/**
 * factorial - Prints the Factorial of a number
 *
 * @n: Integer value to be passed in
 *
 * Return: The factorial of the number @n
 */
int factorial(int n)
{
	int fact = 0;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	fact = n * factorial(n - 1);

	return (fact);
}

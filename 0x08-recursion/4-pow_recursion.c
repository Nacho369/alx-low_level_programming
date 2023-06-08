#include "main.h"


/**
 * _pow_recursion - Finds the value of x raised to the power of y.
 *
 * @x: Bade value
 * @y: Exponent value
 *
 * Return: Result of the power
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	pow = x * _pow_recursion(x, y - 1);

	return (pow);
}

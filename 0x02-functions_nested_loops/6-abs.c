#include "main.h"


/**
 * _abs - Computes the absolute balue of an integer
 *
 * @n: Number to get absolute value of
 *
 * Return: The absolute value computed
 */
int _abs(int n)
{
	int abs = n - (n * 2);

	if (n > 0)
		return (n);

	return (abs);
}

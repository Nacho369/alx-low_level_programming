#include "main.h"


/**
 * _isdigit - Checks for a digit (0 through 9)
 *
 * @c: Digir to check
 *
 * Return: 1 if @c is a digit
 * 0 if otherwise
 */
int _isdigit(int c)
{
	int dig = c;

	if (dig > 47 && dig < 58)
		return (1);

	return (0);
}

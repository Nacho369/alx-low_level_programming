#include "main.h"


/**
 * _isupper - Checks for upper case character
 *
 * @c: Character to check
 *
 * Return: 1 if @c is uppercase
 * 0 if otherwise
 */
int _isupper(int c)
{
	int ch = c;

	if (ch > 64 && ch < 91)
		return (1);

	return (0);
}

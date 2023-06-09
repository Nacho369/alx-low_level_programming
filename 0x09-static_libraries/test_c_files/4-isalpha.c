#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 *
 * @c: c is the argument passed
 *
 * Return: 1 if c is a letter, lowercase or uppercase,
 * and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"


/**
 * _isalpha - Checks for alphabetical characters
 *
 * @c: Character to check
 *
 * Return: 1 if arg c is an alphabet
 * 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);

	return (0);
}

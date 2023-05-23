#include "main.h"


/**
 * _islower - Chexks for lowercase characters
 *
 * @c: Character to check
 *
 * Return: 1 if arg c is lower case
 * 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

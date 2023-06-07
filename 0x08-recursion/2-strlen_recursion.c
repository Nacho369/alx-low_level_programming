#include "main.h"


/**
 * _strlen_recursion - Finds the lenght of a string
 *
 * @s: Pointer to the string
 *
 * Return: Lenght of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = len + 1 + _strlen_recursion(s + 1);
		return (len);
	}

	return (len);
}

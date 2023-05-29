#include "main.h"


/**
 * _strlen - Returns the length of a string.
 *
 * @s: String to check
 *
 * Return: Lenght of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

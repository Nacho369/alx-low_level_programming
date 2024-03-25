#include "main.h"

/**
 * _strlen - Returns lenght of  a string
 *
 * @s: string value
 *
 * Return: Lenght of string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	return (lenght);
}

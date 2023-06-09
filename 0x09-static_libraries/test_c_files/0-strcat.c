#include "main.h"

/**
 * _strcat - Concatenate teo different strings to one.
 *
 * @dest: start string without terminating null byte
 * @src: end string with terminating null byte
 *
 * Return: Pointer to the resulting string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, a = 0, b = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		a++;
	}

	for (i = a; src[b] != '\0'; i++)
	{
		dest[i] = src[b];
		b++;
	}

	dest[i] = '\0';

	return (dest);
}

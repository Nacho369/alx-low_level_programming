#include "main.h"

/**
 * _strncat - Concatenate two different strings to one.
 *
 * @dest: start string without terminating null byte
 * @src: end string with terminating null byte
 * @n: limit to concatenate from src
 *
 * Return: Pointer to the resulting string dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a = 0, b = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		a++;
	}

	for (i = a; b < n && src[b] != '\0'; i++)
	{
		dest[i] = src[b];
		b++;
	}

	dest[i] = '\0';

	return (dest);
}

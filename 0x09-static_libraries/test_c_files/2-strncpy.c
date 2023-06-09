#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: Buffer pointed to be copied into
 * @src: string to be copied from
 * @n: limit of string to copy from src
 *
 * Return: Pointer to the resulting string dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

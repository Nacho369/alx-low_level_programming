#include "main.h"


/**
 * _strncpy - Copies a string
 *
 * @dest: Pointer to copy string to
 * @src: Where to copy string from
 * @n: Number of bytes to copy
 *
 * Return: The copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int iter;

	for (iter = 0; iter < n && src[iter] != '\0'; iter++)
		dest[iter] = src[iter];

	for ( ; iter < n; iter++)
		dest[iter] = '\0';

	return (dest);
}

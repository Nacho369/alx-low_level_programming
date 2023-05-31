#include "main.h"


/**
 * _strncat - Concatenates to a string n bytes of another string.
 *
 * @dest: String to concatenate to.
 * @src: String to concatenate.
 * @n: n bytes of string to concatenate.
 *
 * Return: Pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int iter, len;

	for (iter = 0; dest[iter] != '\0'; iter++)
		;

	len = iter;

	for (iter = 0; iter < n && src[iter] != '\0'; iter++)
		dest[len + iter] = src[iter];

	dest[len + iter] = '\0';

	return (dest);
}

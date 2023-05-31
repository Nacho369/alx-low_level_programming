#include "main.h"


/**
 * _strcat - A function that concatenates two strings.
 *
 * @dest: Base string to append to
 * @src: String to concatenate
 *
 * Return: Pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int iter, len;

	for (iter = 0; dest[iter] != '\0'; iter++)
		;

	len = iter;

	for (iter = 0; src[iter] != '\0'; iter++)
		dest[len + iter] = src[iter];

	dest[len + iter] = '\0';

	return (dest);
}

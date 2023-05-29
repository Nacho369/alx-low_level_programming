#include "main.h"


/**
 * _strcpy - Function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed
 * to by dest.
 *
 * @dest: Copy destination
 * @src: Copy source
 *
 * Return: Pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int iter;

	for (iter = 0; src[iter] != '\0'; iter++)
	{
		dest[iter] = src[iter];
	}

	dest[iter] = '\0';

	return (dest);
}

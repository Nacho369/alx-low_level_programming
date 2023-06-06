#include "main.h"


/**
 * _memcpy - Copies memory area from one location in memory to another
 *
 * @dest: Pointer to the destination of where the memory would be copied to
 * @src: Pointer to the source from where the memory would be cipied from
 * @n: The number of bytes to be copied
 *
 * Return: Pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ind;

	for (ind = 0; ind < n; ind++)
		dest[0] = src[0];

	return (dest);
}

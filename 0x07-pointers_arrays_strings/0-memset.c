#include "main.h"


/**
 * _memset - Fills memory with a constant byte
 *
 * @s: Pointer to the starting memory area to be filled
 * @b: Valhe to set
 * @n: Number if bytes to fill
 *
 * Return: Pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ind;

	for (ind = 0; ind < n; ind++ )
		s[ind] = b;

	return (s);
}

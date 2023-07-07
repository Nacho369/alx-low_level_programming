#include "main.h"


/**
 * binary_to_uint - A function that converts a binary number to
 * an unsigned int.
 *
 * @b: A pointer to a string of 0's and 1's
 *
 * Return: Converted number or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int iter;

	if (b == NULL)
		return (0);

	for (iter = 0; b[iter] != '\0'; iter++)
	{
		if (b[iter] != '0' && b[iter] != '1')
			return (0);

		res <<= 1;

		if (b[iter] == '1')
			res += 1;
	}

	return (res);
}

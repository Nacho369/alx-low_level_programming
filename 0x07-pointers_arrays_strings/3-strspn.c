#include "main.h"


/**
 * _strspn - A function that gets the length of a prefix substring.
 *
 * @s: Pointer to string to search in
 * @accept: Pointer to string containing sets of charactesrs to
 * be searched for in
 *
 * Return: Number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int ind, ind2, check;
	unsigned int len = 0;

	for (ind = 0; s[ind] != '\0'; ind++)
	{
		for (ind2 = 0; accept[ind2] != '\0'; ind2++)
		{
			if (s[ind] == accept[ind2])
			{
				check = 1;
				len++;
				break;
			}
			else
				check = 0;
		}

		if (check != 1)
			break;
	}

	return (len);
}

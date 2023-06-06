#include "main.h"


/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: Pointer to string to search
 * @accept: Pointer to the string characters to be search for
 *
 * Return: Pointer to the first occurence of any character from
 * @accept in @s
 */
char *_strpbrk(char *s, char *accept)
{
	int indx, indx2;

	for (indx = 0; s[indx] != '\0'; indx++)
	{
		for (indx2 = 0; accept[indx2] != '\0'; indx2++)
		{
			if (accept[indx2] == s[indx])
				return (s + indx);
		}
	}

	return (NULL);
}

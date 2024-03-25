#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: String to search for character @c in
 * @c: Character to locate in the string @s
 *
 * Return: First occurence of c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}

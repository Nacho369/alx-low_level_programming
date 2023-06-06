#include "main.h"


/**
 * _strchr - Locates a character in a string
 *
 * @s: String to find character in
 * @c: Character to locate in the string
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int ind;

	for (ind = 0; s[ind] != '\0'; ind++)
	{
		if (s[ind] == c)
			return (s + ind);
	}

	if (s[ind] == c)
		return (s + ind);

	return (NULL);
}

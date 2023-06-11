#include "main.h"


int check_next(char *s1, char *s2, int indx);

/**
 * wildcmp - A function that compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0.
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: 1 - if the strings can be considered identical
 * 0 - if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int indx = 0;

	return (check_next(s1, s2, indx));
}

int check_next(char *s1, char *s2, int indx)
{
	if (s1[indx] == '\0' && s2[indx] == '\0')
		return (1);

	if (s1[indx] == s2[indx])
		return (check_next(s1, s2, indx + 1));

	return (0);
}

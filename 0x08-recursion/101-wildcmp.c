#include "main.h"


int check_next(char *s1, char *s2, int indx, int indx1);
int check_wild(char *s2, int indx1);
int check_char(char *s1, char *s2, int indx, int indx1);

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
	int indx = 0, indx1 = 0;

	return (check_next(s1, s2, indx, indx1));
}


/**
 * check_next - Check for equality of the next index
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @indx: Index for the first string
 * @indx1: Index for the second string
 *
 * Return: 1 - if the strings can be considered identical
 * 0- if otherwise
 */
int check_next(char *s1, char *s2, int indx, int indx1)
{
	if (s1[indx] == '\0' && s2[indx1] == '\0')
		return (1);

	if (s2[indx1] == '*')
	{
		indx1 = check_wild(s2, indx1);

		if (s2[indx1] == '\0')
			return (1);

		if (s1[indx] == s2[indx1])
			check_char(s1, s2, indx, indx1);
	}

	if (s1[indx] == s2[indx1])
		return (check_next(s1, s2, indx + 1, indx1 + 1));

	return (0);
}


/**
 * check_wild - Iterate through from the point of tue wild character until the
 * point if non-wild character
 *
 * @s2: String to iterate through
 * @indx1: Index of the string
 *
 * Return: Index at which the character is a non wild character
 */
int check_wild(char *s2, int indx1)
{
	if (s2[indx1] != '*')
		return (indx1);

	return (check_wild(s2, indx1 + 1));
}

int check_char(char *s1, char *s2, int indx, int indx1)
{
	if (s1[indx] == s2[indx1])
		check_char(s1, s2, indx + 1, indx1 + 1);

	if (s1[indx] != s2[indx1])
		check_char(s1, s2, indx + 1, indx1);
}

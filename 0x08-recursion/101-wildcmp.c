#include "main.h"


int check_next(char *s1, char *s2, int indx, int indx1);
int check_wild(char *s2, int indx1);
int inc_s1_indx(char *s1, char *s2, int indx, int indx1);


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

		if (s1[indx + 1] == s2[indx1]) /* Code for school.c -> s*c */
			indx += 2;
		else if (s1[indx] == s2[indx1])
			indx += 1;

		if (s1[indx] != s2[indx1]) /* Line check if issues */
			indx = inc_s1_indx(s1, s2, indx, indx1);
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


/**
 * inc_s1_indx - Iterates through the @s1 string and increases it's index
 * until its character  matches the @s2 character
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @indx: Index for the first string
 * @indx1: Index for the second string
 *
 * Return: The @s1 index at which the @s1 character matches the @s2 character
 */
int inc_s1_indx(char *s1, char *s2, int indx, int indx1)
{
	if (s1[indx] == s2[indx1])
		return (indx);

	return (inc_s1_indx(s1, s2, indx + 1, indx1));
}

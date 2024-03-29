#include "main.h"

int find_strlen(char *s, int indx);
int check_palindrome(char *s, int len, int indx);

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The string to be checked.
 *
 * Return: 1- If the string is a palindrome.
 * 0 - If the string is not a palindrome.
 */
int is_palindrome(char *s)
{
	int indx = 0;
	int len = find_strlen(s, indx);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, indx));
}

/**
 * find_strlen - Returns the length of a string.
 *
 * @s: The string to be measured.
 * @indx: Index of the stirng
 *
 * Return: The length of the string.
 */
int find_strlen(char *s, int indx)
{
	if (s[indx] != '\0')
		return (find_strlen(s, indx + 1));

	return (indx);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 *
 * @s: The string to be checked.
 * @len: The length of s.
 * @indx: Index of the string
 *
 * Return: 1 - If the string is a palindrome.
 * 0 - If the string is not a palindrome.
 */
int check_palindrome(char *s, int len, int indx)
{
	if (s[indx] == s[len / 2])
		return (1);

	if (s[indx] == s[len - 1 - indx])
		return (check_palindrome(s, len, indx + 1));

	return (0);
}

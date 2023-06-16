#include "main.h"

int _strlen(char *str);


/**
 * string_nconcat - A function that concatenates two strings
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to tye second string
 * @n: Number of bytes from @s2 to concatenate to @s1
 *
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int iter, iter2, indx, len = 0, len1 = 0, len2 = 0;
	char *str_n_concat = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (indx = 0; s1[indx]; indx++)
                len1++;

	for (indx = 0; s2[indx]; indx++)
                len2++;

	if (len2 > n)
		len2 = n;

	len = len1 + len2;

	str_n_concat = malloc(sizeof(char) * (len + 1));

	if (str_n_concat == NULL)
		return (NULL);

	indx = 0;

	for (iter = 0; iter < len1; iter++)
		str_n_concat[indx++] = s1[iter];

	for (iter2 = 0; iter2 < n; iter2++)
		str_n_concat[indx++] = s2[iter2];

	str_n_concat[indx] = '\0';

	return (str_n_concat);
}

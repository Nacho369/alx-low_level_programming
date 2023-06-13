#include "main.h"


/**
 * str_concat - A function that concatenates two strings.
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int iter, len = 0;
	char *str_concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (iter = 0; s1[iter] != '\0'; iter++)
		len++;

	for (iter = 0; s2[iter] != '\0'; iter++)
		len++;

	str_concat = (char *) malloc((len + 1) * sizeof(char));

	if (str_concat == NULL)
		return (NULL);

	len = 0;

	for (iter = 0; s1[iter] != '\0'; iter++)
	{
		str_concat[len] = s1[iter];
		len++;
	}

	for (iter = 0; s2[iter] != '\0'; iter++)
	{
		str_concat[len] = s2[iter];
		len++;
	}

	str_concat[len] = '\0';

	return (str_concat);
}

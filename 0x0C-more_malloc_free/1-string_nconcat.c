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
	unsigned int iter, indx, len = 0, len_s2 = 0;
	char *str_n_concat = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len += _strlen(s1);
	len_s2 += _strlen(s2);

	if (n >= len_s2)
		len += _strlen(s2);
	else
		for (indx = 0; indx < n; indx++)
			len += 1;

	str_n_concat = malloc(sizeof(char) * (len + 1));

	if (str_n_concat == NULL)
		return (NULL);

	indx = 0;

	for (iter = 0; s1[iter] != '\0'; iter++)
		str_n_concat[indx++] = s1[iter];

	for (iter = 0; iter < n; iter++)
		str_n_concat[indx++] = s2[iter];

	str_n_concat[indx] = '\0';

	return (str_n_concat);
}


/**
 * _strlen - Find the lenght of a string
 *
 * @str: The string to find lenght of
 *
 * Return: Lenght of @str
 */
int _strlen(char *str)
{
	int indx, len = 0;

	for (indx = 0; str[indx] != '\0'; indx++)
		len++;

	return (len);
}

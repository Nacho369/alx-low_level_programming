#include "main.h"


/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: Pointer to string to duplicate
 *
 * Return: Pointer to the duplicated string or NULL if it fails
 */
char *_strdup(char *str)
{
	int iter, len = 0;
	char *str_dup;

	if (str == NULL)
		return (NULL);

	for (iter = 0; str[iter] != '\0'; iter++)
		len++;

	str_dup = (char *) malloc((len + 1) * sizeof(char));

	if (str_dup == NULL)
		return (NULL);

	for (iter = 0; str[iter] != '\0'; iter++)
	{
		str_dup[iter] = str[iter];
	}

	return (str_dup);
}

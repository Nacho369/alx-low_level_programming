#include "main.h"


/**
 * strtow - A function that splits a string into words
 *
 * @str: String to split
 *
 * Return: A pointer to an array of strings
 */
char **strtow(char *str)
{
	int indx, len = 0;
	char **arr_str = NULL;

	if (str == NULL || str == "")
		return (NULL);

	for (indx = 0; str[indx] != '\0'; indx++)
	{
		if (str[indx] != 32)
			continue;
	}

	arr_str = (char *) malloc(sizeof(char *));

	if (arr_str == NULL)
		return (NULL);
}

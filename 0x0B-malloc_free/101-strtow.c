#include "main.h"

int size_m(char *str);
int word_sz(char *str, int indx);

/**
 * strtow - A function that splits a string into words
 *
 * @str: String to split
 *
 * Return: A pointer to an array of strings
 */
char **strtow(char *str)
{
	int indx = 0, indx2 = 0, len = 0, size, row, col, iter;
	char **arr_str = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (iter = 0; str[iter] != '\0'; iter++)
	{
		if (str[iter] != 32)
			break;

		if (str[iter] == 32 && str[iter + 1] == '\0')
			return (NULL);
	}

	size = size_m(str);

	arr_str = (char **) malloc((size + 1) * sizeof(char *));

	if (arr_str == NULL)
		return (NULL);

	for (row = 0; row < size; row++)
	{
		col = 0;
		len = word_sz(str, indx);

		arr_str[row] = (char *) malloc((len + 1) * sizeof(char));

		if (arr_str[row] == NULL)
			return (NULL); /* Need to free, not complete */

		for (; str[indx2] != '\0'; indx2++)
		{
			if (str[indx2] != 32)
			{
				arr_str[row][col] = str[indx2];
				col++;
			}

			if (str[indx2] != 32 &&
			(str[indx2 + 1] == 32 || str[indx2 + 1] == '\0'))
			{
				indx2 += 1;
				break;
			}
		}

		arr_str[row][col] = '\0';
	}

	arr_str[row] = NULL;

	return (arr_str);
}


/**
 * size_m - Get the number of words in the string
 *
 * @str: String to get worss from
 *
 * Return: The number of words in the string
 */
int size_m(char *str)
{
	int indx, size = 0;

	for (indx = 0; str[indx] != '\0'; indx++)
	{
		if ((str[indx] != 32) &&
		(str[indx + 1] == 32 || str[indx + 1] == '\0'))
			size++; /* Gets the number of pointers to create. */
	}

	return (size);
}


/**
 * word_sz - Get the size of word
 *
 * @str: String from where to get the size of word
 * @indx: Index of string
 *
 * Return: The size of the word
 */
int word_sz(char *str, int indx)
{
	int len = 0;

	for (; str[indx] != '\0'; indx++)
	{
		if (str[indx] != 32)
			len++; /* Get size of the current word */

		if (str[indx] != 32 &&
		(str[indx + 1] == 32 || str[indx + 1] == '\0'))
		{
			indx += 1;
			break;
		}
	}

	return (len);
}

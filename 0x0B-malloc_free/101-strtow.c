#include "main.h"

int size_m(char *str);

/**
 * strtow - A function that splits a string into words
 *
 * @str: String to split
 *
 * Return: A pointer to an array of strings
 */
char **strtow(char *str)
{
	int indx2 = 0, indx3 = 0, size, len;
	int row, col;
	char **arr_str = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	size = size_m(str);

	arr_str = (char **) malloc((size + 1) * sizeof(char *));

	if (arr_str == NULL)
		return (NULL);

	for (row = 0; row < size; row++)
	{
		len = 0, col = 0;

		for (; str[indx2] != '\0'; indx2++)
		{
			if (str[indx2] != 32)
				len++;

			if (str[indx2] != 32 &&
			(str[indx2 + 1] == 32 || str[indx2 + 1] == '\0'))
			{
				indx2 += 1;
				break;
			}
		}

		arr_str[row] = (char *) malloc((len + 1) * sizeof(char));

		if (arr_str[row] == NULL)
			return (NULL); /* Need to free, not complete */

		for (; str[indx3] != '\0'; indx3++)
		{
			if (str[indx3] != 32)
			{
				arr_str[row][col] = str[indx3];
				col++;
			}

			if (str[indx3] != 32 &&
			(str[indx3 + 1] == 32 || str[indx3 + 1] == '\0'))
			{
				indx3 += 1;
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

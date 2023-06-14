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
	int indx, len_ch,  indx2 = 0, indx3 = 0, size = 0;
	int row, col = 0;
	char **arr_str = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (indx = 0; str[indx] != '\0'; indx++)
	{
		if ((str[indx] != 32) &&
		 (str[indx + 1] == 32 || str[indx + 1] == '\0'))
			size++; /* Gets the number of pointers to create. */
	}

	/* Allocate space for the size number of pointers plus one for NULL */
	arr_str = (char **) malloc(size * sizeof(char *));

	if (arr_str == NULL)
		return (NULL);

	for (row = 0; row < size; row++)
	{
		len_ch = 0;

		/* Get the lenght of each word */
		for (; str[indx2] != '\0'; indx2++)
		{
			if (str[indx2] != 32)
				len_ch++;

			if (str[indx2] != 32 &&
			(str[indx2 + 1] == 32 || str[indx2 + 1] == '\0'))
			{
				indx2 += 1;
				break;
			}
		}

		/* Allocate space for each wors based on the lenght gotten */
		arr_str[row] = (char *) malloc(len_ch * sizeof(char));

		if (arr_str[row] == NULL)
			return (NULL); /* Need to free, not complete */

		/* Assign each word to a pointer */
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

		/* arr_str[row][col] = '\0'; */
	}

	return (arr_str);
}

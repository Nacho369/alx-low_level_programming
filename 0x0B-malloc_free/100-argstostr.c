#include "main.h"


/**
 * argstostr - A function that concatenates all the arguments
 * of your program.
 *
 * @ac: Argument counts
 * @av: Argument vector
 *
 * Return: A pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int indx, indx2, index, size = 0;
	char *concat = NULL;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);

	for (indx = 0; indx < ac; indx++)
	{
		for (indx2 = 0; av[indx][indx2] != '\0'; indx2++)
			size++; /* Gets the lenght of the arguments */
	}

	size += ac; /* For each new line */

	concat = (char *) malloc((size + 1) * sizeof(char)); /* + 1 is for '\0' */

	if (concat == NULL)
		return (NULL);

	index = 0;

	for (indx = 0; indx < ac; indx++)
	{
		for (indx2 = 0; av[indx][indx2] != '\0'; indx2++)
			concat[index++] = av[indx][indx2];

		concat[index++] = '\n';
	}

	concat[size] = '\0';

	return (concat);
}

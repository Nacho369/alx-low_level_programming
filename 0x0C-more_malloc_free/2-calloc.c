#include "main.h"


/**
 * _calloc - A function that allocates memory for an array, using malloc.
 *
 * @nmemb: Number of element
 * @size: Size of an element
 *
 * Return: void Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int indx;
	char *ptr = NULL;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (indx = 0; ptr[indx] != '\0'; indx++)
	{
		ptr[indx] = 0;
	}

	return ((void *) ptr);
}

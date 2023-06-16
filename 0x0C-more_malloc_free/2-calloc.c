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
	void *ptr = NULL;
	char *arr_ptr = NULL;

	if (nmemb == 0)
		return (0);

	if (size == 0)
		return (0);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	arr_ptr = ptr;

	for (indx = 0; arr_ptr[indx] != '\0'; indx++)
	{
		/**
		 * Since ptr can't be set to a the
		 * value 0 due to it being a null
		 * pointer, arr_ptr was created to set the values to 0
		 */
		arr_ptr[indx] = 0;
	}

	return (ptr);
}

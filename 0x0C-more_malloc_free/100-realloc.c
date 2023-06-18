#include "main.h"


/**
 * _realloc - A function that reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the memory to be resized
 * @old_size: Old size of @ptr
 * @new_size: New size to resize to
 *
 * Return: A pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int indx;
	char *ptr_d = ptr, *new_ptr = NULL;
	void *ret_ptr = NULL;

	if (new_size == old_size)
		return (ptr);

	if (ptr_d == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		ret_ptr = new_ptr;

		return (ret_ptr);
	}

	if (new_size == 0 && ptr_d != NULL)
	{
		free(new_ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (indx = 0; indx < old_size; indx++)
			new_ptr[indx] = ptr_d[indx];

		free(ptr);
	}

	ret_ptr = new_ptr;

	return (ret_ptr);
}

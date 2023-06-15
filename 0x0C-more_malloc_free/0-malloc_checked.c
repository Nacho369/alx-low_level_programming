#include "main.h"


/**
 * malloc_checked - Allocate memory using malloc
 *
 * @b: Size of the allocated space in memory
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;
       	
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

#include "main.h"


/**
 * free_dog - Free the space allocated for the dog type
 *
 * @Pointer to the dog type
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
}

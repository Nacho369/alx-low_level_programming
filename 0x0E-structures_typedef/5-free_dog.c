#include "dog.h"


/**
 * free_dog - free dog structure
 *
 * @d: dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{

	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

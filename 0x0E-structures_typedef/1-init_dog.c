#include "dog.h"


/**
 * init_dog - A function that initialize a variable of type struct dog
 *
 * @d: Pointer to newly defined type
 * @name: Name value given
 * @age: Age value given
 * @owner: Owner value given
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

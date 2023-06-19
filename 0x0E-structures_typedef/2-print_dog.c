#include "dog.h"


/**
 * print_dog - A function that prints a struct dog
 *
 * @dog d: Pointer to the newly defined structure dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");

	if (d->age == NULL)
		printf("Age: (nil)\n");

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
 
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

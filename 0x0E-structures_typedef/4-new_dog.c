#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, char *src);


/**
 * *new_dog - A function that creates a new dog type
 *
 * @name: Name value given
 * @age: Age value given
 * @owner: Owner value given
 *
 * Return: Pointer to the newly created dog type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = NULL;
	int name_len, owner_len;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	/* Allocate space for dog type */
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	name_len = _strlen(name) + 1;

	/* Allocate space for dog name */
	dog->name = malloc(sizeof(char) * name_len);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_len = _strlen(owner) + 1;

	/* Allocate space for dog owner */
	dog->owner = malloc(sizeof(char) * owner_len);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}


/**
 * _strlen - Gets the lenght of string
 *
 * @str: String to get its lenght
 *
 * Return: Lenght of @str
 */
int _strlen(char *str)
{
	int len = 0;

	for (; str[len] != '\0'; len++)
		;

	return (len);
}


/**
 * _strcpy - Copies a string
 *
 * @src: Where to copy from
 * @dest: Destination to copy to
 *
 * Return: Pointer to the copied string, @dest
 */
char *_strcpy(char *dest, char *src)
{
	int indx;

	if (src == NULL)
		return (NULL);

	for (indx = 0; src[indx] != '\0'; indx++)
		dest[indx] = src[indx];

	dest[indx] = '\0';

	return (dest);
}

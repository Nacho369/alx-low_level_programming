#include "hash_tables.h"


/**
 * key_index - A function that gives you the key index of a key
 *
 * @key: Is the key
 * @size: Is the size of the array of the hash table
 *
 * Return: Index at which the key/value pair should be stored in the
 * array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_indx = hash_djb2(key) % size;

	return (key_indx);
}

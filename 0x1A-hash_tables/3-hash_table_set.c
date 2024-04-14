#include "hash_tables.h"


/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: Hash table to add or update key/value to
 * @key: Is the key (Cannot be an empty string)
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx, size;
	hash_node_t *new_node;

	if (ht  == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	indx = key_index((const unsigned char *)key, size);

	if (ht->array[indx] != NULL && strcmp(ht->array[indx]->key, key) == 0)
	{
		ht->array[indx]->value = strdup(value);
		return (1);
	}
	
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[indx];
	ht->array[indx] = new_node;

	return (1);
}

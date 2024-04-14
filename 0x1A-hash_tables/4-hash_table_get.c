#include "hash_tables.h"


/**
 *hash_table_get - function that retrieves a value associated with a key
 *
 *@ht: hash table you want to look into
 *@key: the key you are looking for
 *
 *Return: the value associated with the element else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indx;

	if (key == NULL || ht == NULL)
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[indx];
	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}

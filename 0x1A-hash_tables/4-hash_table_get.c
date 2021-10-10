#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: Hash table to look into
 * @key: key to looking for
 * Return: Key if found otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	char *found = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	found = ht->array[index]->value;

	return (found);
}

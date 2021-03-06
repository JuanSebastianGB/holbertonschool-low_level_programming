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

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= (int)ht->size || ht->array[index] == NULL)
		return (NULL);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) != 0)
		ht->array[index] = ht->array[index]->next;
	return ((ht->array[index]->value != NULL)
				? ht->array[index]->value
				: NULL);
}

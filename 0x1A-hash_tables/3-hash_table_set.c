#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to the hash table
 * @key: Key to add
 * @value: value related with key
 * Return: int if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	int index;
	hash_node_t *node;

	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	node->value = (char *)value;
	node->key = (char *)key;
	ht->array[index] = node;

	return (1);
}

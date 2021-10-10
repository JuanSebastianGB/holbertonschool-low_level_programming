#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to the hash table
 * @key: Key to add
 * @value: value related with key
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	int index = 0, i = 0;
	hash_node_t *node = NULL;
	char *dup_value = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);
	i = index;
	while (ht->array[i] != NULL) /* Has already a node check if repeated*/
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_value; /* Changing value*/
			return (1);
		}
		i++;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(dup_value);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = dup_value;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

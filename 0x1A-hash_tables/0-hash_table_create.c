#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the hash table and the arrays
 * contained inside in each row
 * Return: A hast table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hash_table;
	int i = 0;

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
		return (NULL);

	while (i < (int)size)
	{
		hash_table->array[i] = NULL;
		i++;
	}
	return (hash_table);
}

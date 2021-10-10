#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: Hash table to delete
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	int i;
	hash_node_t *temp_node = NULL, *next;

	for (i = 0; i < (int)ht->size; i++)
	{
		temp_node = ht->array[i];
		while (temp_node != NULL)
		{
			next = temp_node->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
			temp_node = next;
		}
	}
	free(ht->array);
	free(ht);
}

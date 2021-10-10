#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	int i;

	for (i = 0; i < (int)ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = ht->array[i]->next;
			}
		}
		free(ht->array);
		free(ht);
	}
}

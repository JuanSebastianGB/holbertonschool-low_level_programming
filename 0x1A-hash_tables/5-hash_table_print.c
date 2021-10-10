#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: Hash table to print
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;

	if (ht == NULL)
		return (NULL);
	putchar('{');
	for (i = 0; i < (int)ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				if (ht->array[i] == NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}

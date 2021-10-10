#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: Hash table to print
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int i, aux = 0;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < (int)ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (aux == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			aux = 1;
		}
	}
	printf("}\n");
}

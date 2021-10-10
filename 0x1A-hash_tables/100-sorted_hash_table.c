#include "hash_tables.h"

/**
 * shash_table_create - create a sortered hash table
 * @size: Size of the Hash table
 *
 * Return: Hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table = NULL;
	int i;

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(shash_node_t *));
	if (hash_table->array == NULL)
		return (NULL);
	for (i = 0; i < (int)size; i++)
		hash_table->array[i] = NULL;
	hash_table->shead = hash_table->stail = NULL;
	return (hash_table);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: Hash table
 * @key: The unique key
 * @value: Value asociated with the key
 * Return: 1 if success, 0 if fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	int index = 0, i = 0;
	shash_node_t *node = NULL;
	char *dup_value = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);
	i = index;
	while (ht->array[i] != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_value;
			return (1);
		}
		i++;
	}
	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(dup_value);
		return (0);
	}
	node->value = dup_value;
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->next = node->snext = node->sprev = NULL;
	node->next = ht->array[index];
	ht->array[index] = node;
	set_sorted_list(ht, node);
	return (1);
}

/**
 * set_sorted_list - Auxiliar function that implements sorted
 * double linked list
 * @ht: Hash Table
 * @node: Node to add
 * Return: Nothing
 */
void set_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *runer;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = ht->stail = node;
		return;
	}
	runer = ht->shead;
	while (runer != NULL)
	{
		if (strcmp(node->key, runer->key) < 0)
		{
			/*Setting node*/
			node->snext = runer;
			node->sprev = runer->sprev;
			/* Setting rigth node*/
			runer->sprev = node;
			/* Setting left node*/
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
		runer = runer->snext;
	}
	/* Not match found, then node becomes the biggest one (link with tail)*/
	node->snext = ht->stail->next;
	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
 * shash_table_print - Prints sortered hash table
 * @ht: Hash table to print
 * Return - Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *runer = NULL;
	int aux = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	runer = ht->shead;
	putchar('{');
	while (runer != NULL)
	{
		if (aux != 0)
			printf(", ");
		printf("'%s', '%s'", runer->key, runer->value);
		runer = runer->snext;
		aux = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints sortered reverse hash table
 * @ht: Hash table to print
 * Return - Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *runer = NULL;
	int aux = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	runer = ht->stail;
	putchar('{');
	while (runer != NULL)
	{
		if (aux != 0)
			printf(", ");
		printf("'%s', '%s'", runer->key, runer->value);
		runer = runer->sprev;
		aux = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table.
 * @ht: shash table to delete
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	int i;
	shash_node_t *temp_node = NULL, *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
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
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: Hash table
 * @key: Key to looking for
 * Return: Key if found otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
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

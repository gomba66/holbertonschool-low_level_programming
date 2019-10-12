#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - This is a function that create a hash table
 * @size: Size of the hash table.
 * Return: Returns the direction of the hash table, or NULL if it fail.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size < 1)
	{
		return (NULL);
	}
	table = malloc(sizeof(hash_table_t) * 1);
	if (table == NULL)
	{
		return (NULL);
	}
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	table->size = size;

	return (table);
}

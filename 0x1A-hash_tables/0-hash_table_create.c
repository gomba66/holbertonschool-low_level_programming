#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - This is a function that create a hash table
 * @size: This is the size of the key in the array.
 * Return: Returns a hash table, or NULL in otherwise.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array = NULL;
	hash_node_t *node = NULL;

	array = malloc(sizeof(hash_table_t) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (NULL);
	}
	return (array);
}

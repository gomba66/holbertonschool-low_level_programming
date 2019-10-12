#include "hash_tables.h"
/**
 * hash_djb2 - This is the implementation of the djb2 algoritm.
 * @str: Is the string.
 * Return: a has table.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

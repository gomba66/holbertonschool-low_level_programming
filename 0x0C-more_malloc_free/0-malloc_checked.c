#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * This is a function that allocate memory using malloc
 * @b: This is the value that join.
 * Return: pointer *p on success, exit(98) on error
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == '\0')
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}

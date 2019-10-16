#include "holberton.h"
#include <stdio.h>
/**
 * create_array - Function for create an array using malloc
 * @size: size of the array.
 * @c: Characters the will be replaced in each position of the array-
 * Return: a pointer to the array, NULL if the size is 0 or if it fail.
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i = 0;

	if (size < 1)
		return (NULL);
	pointer = malloc(sizeof(pointer) * size);
	if (pointer == NULL)
		return (NULL);

	while (i <= size)
	{
		pointer[i] = c;
		i++;
	}
	return (pointer);
}

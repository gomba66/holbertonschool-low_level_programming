#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Entry point
 * This is the number of elements in the array.
 *
 * @array: vector.
 * @size: number of element in the array.
 * @cmp: pointer of the funtions.
 *
 * Return: index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		while (a < size)
		{
			if (cmp(array[a]) != 0)
				return (a);
			a++;
		}
	}

	return (-1);
}

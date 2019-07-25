#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of n array
 *
 * @array: array of integers
 * @size: size of the array
 * @action: function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{

		unsigned int i = 0;

		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}

#include "search_algos.h"
/**
 * linear_search - This program uses a linear algorithm for to search data
 * @array: Array that will be analized.
 * @size: Size of the array.
 * @value: Value that will be searched.
 * Return: The index of the value in the array, or NULL if it fail.
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int count = 0;

	if (size == 0 || array == NULL)
	{
		return (-1);
	}
	while (count < size)
	{
		printf("Value checked array[%u] = [%i]\n", count, array[count]);
		if (array[count] == value)
		{
			return (count);
		}
		else
		{
			count++;
		}
	}
	if (array[count] == '\0')
		return (-1);

	return (count);
}

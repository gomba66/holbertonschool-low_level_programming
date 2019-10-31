#include "sort.h"
/**
 * bubble_sort - Function that sort an array of integer in ascending order
 * using the Bubble sor algorithm.
 * @array: Array that will be sorted.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t x = 0;
	size_t y = 0;
	int temp = 0;

	for (x = 0; x < size - 1; x++)
		for (y = 0; y < (size - x) - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
		}
}

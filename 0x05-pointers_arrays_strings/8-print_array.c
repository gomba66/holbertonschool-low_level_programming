#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Function that prints all elements of an array
 * @a: Array.
 * @n: number of elements.
 */
void print_array(int *a, int n)
{
	int it = 0;

	if (n < 1)
	{
		n = 1;
	}
	while (it < n)
	{
		if (it != n - 1)
		{
			printf("%d, ", a[it]);
		}
		else
		{
			printf("%d\n", a[it]);
		}
		it++;
	}
}

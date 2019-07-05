#include "holberton.h"
/**
 * print_array - Entry point
 * @a: this is the array that the program return in reverse
 * @n: this is the value of space from the array
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;
	int j;
	int tmp;

	c = n - 1;
	j = 0;
	i = c;
	while (j < (c / 2))
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
 		j++;
		i--;
	}
}
